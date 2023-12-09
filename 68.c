#include <stdio.h>
int main() {
    printf("Nirbhay Singh\n");
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    if (decimal == 0) {
        printf("Octal equivalent: 0\n");
        return 0;
    }
    int octal[32];
    int index = 0;
    while (decimal > 0) {
        octal[index] = decimal % 8;
        decimal /= 8;
        index++;
    }
    printf("Octal equivalent: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", octal[i]);
    }
    printf("\n");
    return 0;
}
