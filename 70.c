#include <stdio.h>
#include <string.h>
int main() {
    printf("Nirbhay Singh\n");
    char hexadecimal[100];
    printf("Enter a hexadecimal number: ");
    scanf("%s", hexadecimal);
    int hexLength = strlen(hexadecimal);
    char binary[4 * hexLength + 1];
    int binaryPosition = 0;
    for (int i = 0; i < hexLength; i++) {
        char hexDigit = hexadecimal[i];
        char* binaryDigits = NULL;
        switch (hexDigit) {
            case '0': binaryDigits = "0000"; break;
            case '1': binaryDigits = "0001"; break;
            case '2': binaryDigits = "0010"; break;
            case '3': binaryDigits = "0011"; break;
            case '4': binaryDigits = "0100"; break;
            case '5': binaryDigits = "0101"; break;
            case '6': binaryDigits = "0110"; break;
            case '7': binaryDigits = "0111"; break;
            case '8': binaryDigits = "1000"; break;
            case '9': binaryDigits = "1001"; break;
            case 'A': case 'a': binaryDigits = "1010"; break;
            case 'B': case 'b': binaryDigits = "1011"; break;
            case 'C': case 'c': binaryDigits = "1100"; break;
            case 'D': case 'd': binaryDigits = "1101"; break;
            case 'E': case 'e': binaryDigits = "1110"; break;
            case 'F': case 'f': binaryDigits = "1111"; break;
            default:
                printf("Invalid hexadecimal digit: %c\n", hexDigit);
                return 1;
        }
        for (int j = 0; j < 4; j++) {
            binary[binaryPosition++] = binaryDigits[j];
        }
    }
    binary[binaryPosition] = '\0';
    printf("Binary equivalent: %s\n", binary);
    return 0;
}
