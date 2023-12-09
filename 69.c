#include <stdio.h>
int main() {
    printf("Nirbhay Singh\n");
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    if (decimal == 0) {
        printf("Hexadecimal equivalent: 0x0\n");
        return 0;
    }
    char hexadecimal[32];
    int index = 0;
    while (decimal > 0) {
        int remainder = decimal % 16;
        if (remainder < 10) {
            hexadecimal[index] = '0' + remainder;
        } else {
            hexadecimal[index] = 'A' + remainder - 10;
        }
        decimal /= 16;
        index++;
    }
    printf("Hexadecimal equivalent: 0x");
    for (int i = index - 1; i >= 0; i--) {
        printf("%c", hexadecimal[i]);
    }
    printf("\n");
    return 0;
}
