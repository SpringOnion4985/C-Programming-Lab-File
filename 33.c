#include <stdio.h>
int main() {
    printf("RIYA GUPTA\n");
    int n,a,b;
    printf("Enter a number: ");
    scanf("%d",&n);
    a = n%10;
    while (n>= 10){
        n/= 10;
    }
    b=n;
    printf("First digit: %d\n", b);
    printf("Last digit: %d\n", a);
    return 0;
}
