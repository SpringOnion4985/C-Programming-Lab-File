#include <stdio.h>
int main() {
    printf("Nirbhay Singh\n");
    int decimal;
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    if (decimal == 0) {
        printf("Binary equivalent: 0\n");
        return 0;
    }
    int binary[32];
    int index = 0;
    while (decimal > 0) {
        binary[index] = decimal % 2;
        decimal /= 2;
        index++;
    }
    printf("Binary equivalent: ");
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");
    return 0;
}
