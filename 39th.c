#include <stdio.h>
int main() {
    printf("*RIYA GUPTA*\n");
    printf("Enter a number: ");
    int number, originalNumber, reversedNumber = 0, remainder;
    scanf("%d", &number);

    originalNumber = number;
    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }
    if (originalNumber == reversedNumber) {
        printf("%d is a palindrome number.\n", originalNumber);
    } else {
        printf("%d is not a palindrome number.\n", originalNumber);
    }
    return 0;
}
