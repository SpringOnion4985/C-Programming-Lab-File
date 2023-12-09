#include <stdio.h>
#include <string.h>
#include <math.h>
int main() {
    printf("Nirbhay Singh\n");
    char hexadecimal[100];
    printf("Enter a hexadecimal number: ");
    scanf("%s", hexadecimal);
    int hexLength = strlen(hexadecimal);
    int decimal = 0;
    int position = 0;
    for (int i = hexLength - 1; i >= 0; i--) {
        char hexDigit = hexadecimal[i];
        int hexValue;
        if (hexDigit >= '0' && hexDigit <= '9') {
            hexValue = hexDigit - '0';
        } else if (hexDigit >= 'A' && hexDigit <= 'F') {
            hexValue = hexDigit - 'A' + 10;
        } else if (hexDigit >= 'a' && hexDigit <= 'f') {
            hexValue = hexDigit - 'a' + 10;
        } else {
            printf("Invalid hexadecimal digit: %c\n", hexDigit);
            return -1;
        }
        decimal += hexValue * pow(16, position);
        position++;
    }
    if (decimal != -1) {
        printf("Decimal equivalent: %d\n", decimal);
    }
    return 0;
}
