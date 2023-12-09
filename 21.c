#include<stdio.h>
int main()
{
    int a;
    printf("Enter any number.");
    scanf("%d",&a);
    int r1,r2;
    r1=a%9;
    r2=a%7;
    if(r1==0 &&r2==0)
    {
        printf("%d is divisible by both 9 and 7",a);
    }
    else if(r1==0 && r2!=0)
    {
        printf("%d is divisible by 9 but not by 7",a);
    }
    else if(r1!=0 && r2==0)
    {
        printf("%d is divisible by 7 but not by 9",a);
    }
    else{
        printf("%d is neither divisible by 9 nor by 7.",a);
    }
    printf("\nNirbhay Singh.");
    return 0;
}
