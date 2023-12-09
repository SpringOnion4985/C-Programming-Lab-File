#include <stdio.h>
int main() {
    printf("Nirbhay Singh\n");
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    printf("Strong numbers between 1 and %d are: ", n);
    for (int i = 1; i <= n; i++) {
        int originalNum = i;
        int sum = 0;
        int num = i;
        while (num != 0) {
            int digit = num % 10;
            int fact = 1;
            if (digit != 0 && digit != 1) {
                for (int j = 2; j <= digit; j++) {
                    fact *= j;
                }
            }
            sum += fact;
            num /= 10;
        }
        if (sum == originalNum) {
            printf("%d, ", originalNum);
        }
    }
    printf("\n");
    return 0;
}
