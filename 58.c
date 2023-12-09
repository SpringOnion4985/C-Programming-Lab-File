#include <stdio.h>
int main() {
    printf("Nirbhay Singh\n");
    int n, first = 0, second = 1, next;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series up to %d terms: ", n);
    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d, ", first);
        } else if (i == 2) {
            printf("%d, ", second);
        } else {
            next = first + second;
            printf("%d, ", next);
            first = second;
            second = next;
        }
    }
    printf("\n");
    return 0;
}
