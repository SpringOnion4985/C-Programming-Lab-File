#include <stdio.h>
int main() {
    printf("Nirbhay Singh\n");
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    int smaller, hcf = 1;
    if (a < b) {
        smaller = a;
    } else {
        smaller = b;
    }
    for (int i = 1; i <= smaller; i++) {
        if (a % i == 0 && b % i == 0) {
            hcf = i;
        }
    }
    printf("The HCF (GCD) of %d and %d is %d\n", a, b, hcf);
    return 0;
}
