#include <stdio.h>
int main() {
    printf("Nirbhay Singh\n");
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);
    int max, lcm;
    if (a > b) {
        max = a;
    } else {
        max = b;
    }
    lcm = max;
    while (1) {
        if (lcm % a == 0 && lcm % b == 0) {
            break;
        }
        lcm += max;
    }
    printf("The LCM of %d and %d is %d\n", a, b, lcm);
    return 0;
}
