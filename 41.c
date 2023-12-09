#include <stdio.h>
int main() {
    printf("*RIYA GUPTA*\n");
    char *ones[] = { "", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine" };
    char *teens[] = { "", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen" };
    char *tens[] = { "", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety" };
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num >= 1 && num <= 9) {
        printf("%s\n", ones[num]);
    } else if (num >= 11 && num <= 19) {
        printf("%s\n", teens[num - 10]);
    } else if (num == 10 || (num >= 20 && num <= 99)) {
        printf("%s", tens[num / 10]);
        if (num % 10 != 0) {
            printf("-%s\n", ones[num % 10]);
        } else {
            printf("\n");
        }
    } else if (num == 0) {
        printf("Zero\n");
    } else {
        printf("Number out of range or not supported.\n");
    }
    return 0;
}
