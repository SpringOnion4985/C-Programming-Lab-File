#include <stdio.h>
int main() {
    printf("Nirbhay Singh\n");
    int row = 7;
    for (int j = 1; j <= row; j++) {
        for (int sp = 1; sp <= j - 1; sp++) {
            printf(" ");
        }
        int last_col = (row * 2 - (2 * j - 1));
        for (int k = 1; k <= last_col; k++) {
            if (j == 1 || k == 1)
                printf("*");
            else if (k == last_col)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
