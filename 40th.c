#include <stdio.h>
int main() {
    printf("*Nirbhay Singh*\n");
    int num, digit, frequency[10] = {0};
    printf("Enter an integer: ");
    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        frequency[digit]++;
        num /= 10;
    }
    printf("Digit Frequency:\n");
    for (int i = 0; i < 10; i++) {
        if (frequency[i] > 0) {
            printf("Digit %d: %d times\n", i, frequency[i]);
        }
    }
    return 0;
}
