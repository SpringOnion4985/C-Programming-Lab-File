#include <stdio.h>
int main() {
    printf("*RIYA GUPTA*\n");
    int number, originalNumber, reversedNumber = 0, digit;
    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;
    while (number != 0) {
        digit = number % 10;
        reversedNumber = reversedNumber * 10 + digit;
        number /= 10;
    }
    printf("Reverse of %d is: %d\n", originalNumber, reversedNumber);
    return 0;
}
