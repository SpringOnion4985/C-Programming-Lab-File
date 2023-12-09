#include <stdio.h>
int main() {
    printf("Nirbhay Singh\n");
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    int originalNum = number;
    int sum = 0;
    while (number != 0) {
        int digit = number % 10;
        int fact = 1;
        if (digit != 0 && digit != 1) {
            for (int i = 2; i <= digit; i++) {
                fact *= i;
            }
        }
        sum += fact;
        number /= 10;
    }
    if (sum == originalNum) {
        printf("%d is a strong number.\n", originalNum);
    } else {
        printf("%d is not a strong number.\n", originalNum);
    }
    return 0;
}
