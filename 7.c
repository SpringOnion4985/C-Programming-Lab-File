#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of 1st variable.");
    scanf("%d",&a);
    printf("Enter the value of 2nd variable.");
    scanf("%d",&b);
    printf("The value of a and b before swapping: %d, %d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nThe value of a and b after swapping: %d, %d",a,b);
    printf("\nNirbhay Singh");
    return 0;
}
