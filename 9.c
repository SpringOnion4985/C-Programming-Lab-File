#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of 1st variable.");
    scanf("%d",&a);
    printf("Enter the value of 2nd variable.");
    scanf("%d",&b);
    printf("Enter the value of 3rd variable.");
    scanf("%d",&c);
    printf("The value of a,b and c before swapping: %d, %d, %d",a,b,c);
    a=a+b+c;
    b=a-b-c;
    c=a-b-c;
    a=a-b-c;
    printf("\nThe value of a,b and c after swapping: %d, %d, %d",a,b,c);
    printf("\nNirbhay Singh");
    return 0;
}
