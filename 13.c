#include<stdio.h>
#include<math.h>
int main()
{
    int side;
    printf("Enter the length of side of the cube.");
    scanf("%d",&side);
    int area=6*(pow(side,2));
    int volume=pow(side,3);
    printf("The area of the cube is: %d units.",area);
    printf("\nThe volume of the cube is: %d sq. units.",volume);
    printf("\nNirbhay Singh");
    return 0;
}
