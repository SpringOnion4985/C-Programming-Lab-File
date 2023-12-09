#include<stdio.h>
#include<math.h>
int main()
{
    int radius;
    double pie=3.14;
    printf("Enter the radius of the circle(as an integer).");
    scanf("%d",&radius);
    double area=pie*pow(radius,2);
    printf("Area of the circle having radius %d is: %lf",radius,area);
    printf("\nNirbhay Singh");
    return 0;
}
