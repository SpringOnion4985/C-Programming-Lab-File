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
        int sum = 0;

        for (int i = 2; i <= n; i++) {
            if (isPrime(i)) {
                sum += i;
            }
        }
        printf("Sum of prime numbers between 1 and %d is: %d\n", n, sum);
    }
    return 0;
}
