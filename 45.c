#include <stdio.h>
int main() {
    printf("Nirbhay Singh\n");
    int n, factorial = 1;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Please enter a positive integer.\n");
    } else {
        for (int i=2;i<=n;i++) {
            factorial*=i;
        }
        printf("Factorial of %d is %d\n", n, factorial);
    }
    return 0;
}
