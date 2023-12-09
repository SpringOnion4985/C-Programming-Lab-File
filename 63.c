#include <stdio.h>
int main() {
    printf("Nirbhay Singh\n");
    char binary[100];
    printf("Enter a binary number: ");
    scanf("%s", binary);
    int binaryLength = strlen(binary);
    int position = 0;
    char hexadecimal[50];
    int hexadecimalValue = 0;
    int exponent = 0;
    int padding = 4 - (binaryLength % 4);
    if (padding != 4) {
        for (int i = 0; i < padding; i++) {
            binary[binaryLength + i] = '0';
        }
        binaryLength += padding;
    }
    for (int i = binaryLength - 1; i >= 0; i--) {
        int bit = binary[i] - '0';
        hexadecimalValue += bit * (1 << exponent);
        exponent++;
        if (exponent == 4 || i == 0) {
            char hexDigit;
            if (hexadecimalValue < 10) {
                hexDigit = '0' + hexadecimalValue;
            } else {
                hexDigit = 'A' + hexadecimalValue - 10;
            }
            hexadecimal[position++] = hexDigit;
            hexadecimalValue = 0;
            exponent = 0;
        }
    }
    printf("Hexadecimal equivalent: 0x");
    for (int i = position - 1; i >= 0; i--) {
        printf("%c", hexadecimal[i]);
    }
    printf("\n");
    return 0;
}
