#include <stdio.h>
int main() {
    printf("Nirbhay Singh\n");
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);
    printf("Perfect numbers between 1 and %d are: ", n);
    for (int i = 1; i <= n; i++) {
        int sum = 1;
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                if (j * j == i) {
                    sum += j;
                } else {
                    sum += j + (i / j);
                }
            }
        }
        if (sum == i) {
            printf("%d, ", i);
        }
    }
    printf("\n");
    return 0;
}
