#include <stdio.h>
int main() {
    printf("*RIYA GUPTA*\n");
    int number, originalNumber, numDigits = 0, firstDigit, lastDigit, swappedNumber = 0, multiplier = 1;

    printf("Enter a number: ");
    scanf("%d", &number);
    originalNumber = number;
    while (number != 0) {
        number /= 10;
        numDigits++;
    }
    number = originalNumber;
    lastDigit = number % 10;

    while (number >= 10) {
        number /= 10;
        multiplier *= 10;
    }

    firstDigit = number;
    swappedNumber = lastDigit * multiplier;
    swappedNumber += originalNumber % multiplier;
    swappedNumber -= lastDigit;
    swappedNumber += firstDigit;
    printf("Number after swapping first and last digits: %d\n", swappedNumber);

    return 0;
}
