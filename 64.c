#include <stdio.h>
#include <string.h>
int main() {
    printf("Nirbhay Singh\n");
    char octal[100];
    printf("Enter an octal number: ");
    scanf("%s", octal);
    int octalLength = strlen(octal);
    char binary[3 * octalLength + 1];
    int binaryPosition = 0;
    for (int i = 0; i < octalLength; i++) {
        char octalDigit = octal[i];
        char* binaryDigits = NULL;
        switch (octalDigit) {
            case '0': binaryDigits = "000"; break;
            case '1': binaryDigits = "001"; break;
            case '2': binaryDigits = "010"; break;
            case '3': binaryDigits = "011"; break;
            case '4': binaryDigits = "100"; break;
            case '5': binaryDigits = "101"; break;
            case '6': binaryDigits = "110"; break;
            case '7': binaryDigits = "111"; break;
            default:
                printf("Invalid octal digit: %c\n", octalDigit);
                return 1;
        }
        for (int j = 0; j < 3; j++) {
            binary[binaryPosition++] = binaryDigits[j];
        }
    }
    binary[binaryPosition] = '\0';
    printf("Binary equivalent: %s\n", binary);
    return 0;
}
