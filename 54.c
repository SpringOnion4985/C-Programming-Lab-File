#include <stdio.h>
int main() {
    printf("Nirbhay Singh\n");
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    int sum = 1;
    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            if (i * i == number) {
                sum += i;
            } else {
                sum += i + (number / i);
            }
        }
    }
    if (sum == number) {
        printf("%d is a perfect number.\n", number);
    } else {
        printf("%d is not a perfect number.\n", number);
    }
    return 0;
}
