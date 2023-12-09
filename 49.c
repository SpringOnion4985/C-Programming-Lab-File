#include <stdio.h>
int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    printf("Nirbhay Singh\n");
    int n;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);
    if (n <= 1) {
        printf("There are no prime numbers in the given range.\n");
    } else {
        printf("Prime numbers between 1 and %d are: ",n);
        for (int i = 2; i <= n; i++) {
            if (isPrime(i)) {
                printf("%d, ", i);
            }
        }
        printf("\n");
    }
    return 0;
}
