#include <stdio.h>
#include <string.h>
int main() {
    printf("Nirbhay Singh\n");
    char binary[100];
    printf("Enter a binary number: ");
    scanf("%s", binary);
    int length = strlen(binary);
    for (int i = 0; i < length; i++) {
        if (binary[i] == '0') {
            binary[i] = '1';
        } else if (binary[i] == '1') {
            binary[i] = '0';
        }
    }
    int carry = 1;
    for (int i = length - 1; i >= 0; i--) {
        if (binary[i] == '0' && carry == 1) {
            binary[i] = '1';
            carry = 0;
        } else if (binary[i] == '1' && carry == 1) {
            binary[i] = '0';
        }
    }
    printf("Two's complement of the binary number: %s\n", binary);
    return 0;
}
