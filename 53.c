#include <stdio.h>
int main() {
    printf("Nirbhay Singh\n");
    int n, num, originalNum, remainder, result;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Armstrong numbers between 1 and %d are: ", n);
    for (num = 1; num <= n; num++) {
        originalNum = num;
        result = 0;
        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += remainder * remainder * remainder;
            originalNum /= 10;
        }
        if (result == num) {
            printf("%d ", num);
        }
    }
    return 0;
}
