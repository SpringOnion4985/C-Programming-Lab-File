#include <stdio.h>
int main() {
    printf("Nirbhay Singh\n");
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Prime factors of %d are: ", n);
    while (n % 2 == 0) {
        printf("2 ");
        n = n / 2;
    }
    for (int i = 3; i <= n; i = i + 2) {
        while (n % i == 0) {
            printf("%d, ", i);
            n = n / i;
        }
    }
    return 0;
}
