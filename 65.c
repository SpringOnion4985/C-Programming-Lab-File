#include <stdio.h>
#include <string.h>
int main() {
    printf("Nirbhay Singh\n");
    char octal[100];
    printf("Enter an octal number: ");
    scanf("%s", octal);
    int octalLength = strlen(octal);
    int decimal = 0;
    int position = 1;
    for (int i = octalLength - 1; i >= 0; i--) {
        int octalDigit = octal[i] - '0';
        decimal += octalDigit * position;
        position *= 8;
    }
    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}
