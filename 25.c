#include <stdio.h>
int main() {
    printf("Nirbhay Singh\n");
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("n should be a positive integer.\n");
    } else {
        printf("Natural numbers from 1 to %d are:\n", n);
        for (i = 1; i <= n; i++) {
            printf("%d\n", i);
        }
    }
    return 0;
}
