#include <stdio.h>
#include <string.h>
int main() {
    printf("Nirbhay Singh\n");
    char octal[100];
    printf("Enter an octal number: ");
    scanf("%s", octal);
    int octalLength = strlen(octal);
    char binary[4 * octalLength + 1];
    char hexadecimal[octalLength];
    int binaryPosition = 0;
    for (int i = 0; i < octalLength; i++) {
        char octalDigit = octal[i];
        int octalValue = octalDigit - '0';
        for (int j = 2; j >= 0; j--) {
            binary[binaryPosition++] = ((octalValue >> j) & 1) + '0';
        }
    }
    binary[binaryPosition] = '\0';
    int binaryLength = strlen(binary);
    int remainder = binaryLength % 4;
    int padding = (remainder == 0) ? 0 : 4 - remainder;
    for (int i = 0; i < padding; i++) {
        binary[binaryLength + i] = '0';
    }
    binaryLength += padding;
    int hexIndex = 0;
    for (int i = 0; i < binaryLength; i += 4) {
        int hexValue = 0;

        for (int j = 0; j < 4; j++) {
            hexValue = (hexValue << 1) | (binary[i + j] - '0');
        }
        if (hexValue < 10) {
            hexadecimal[hexIndex++] = hexValue + '0';
        } else {
            hexadecimal[hexIndex++] = hexValue - 10 + 'A';
        }
    }
    hexadecimal[hexIndex] = '\0';
    printf("Hexadecimal equivalent: 0x%s\n", hexadecimal);
    return 0;
}
