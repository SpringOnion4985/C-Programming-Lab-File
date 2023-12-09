#include <stdio.h>
#include <string.h>
int main() {
    printf("Nirbhay Singh\n");
    char binary[100];
    printf("Enter a binary number: ");
    scanf("%s", binary);
    int binaryLength = strlen(binary);
    int decimal = 0;
    int position = 1;
    for (int i = binaryLength - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += position;
        }
        position *= 2;
    }
    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}
