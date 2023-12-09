#include <stdio.h>
int main() {
    printf("*RIYA GUPTA*\n");
    int number, originalNumber, product = 1, digit;
    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    while (number != 0) {
        digit = number % 10;
        product *= digit;
        number /= 10;
    }
    printf("Product of digits of %d is: %d\n", originalNumber, product);
    return 0;
}
