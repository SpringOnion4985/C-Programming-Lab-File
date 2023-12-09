#include<stdio.h>
int main()
{
    int input;
    printf("Enter 1 for Right-angled Triangle ,  2 for Isosceles triangle and 3 for a triangle with three sides\n");
    scanf("%d", &input);

    switch(input){
case 1:
     int base1,height1;
        printf("Selected triangle is Right-angled triangle\n");
        printf("Enter Height and Base\n");
        scanf("%d %d", &height1,&base1);
        float area= (float)(height1*base1)/2;
         printf("Area of Right-angled triangle is %f", area);
         break;
case 2:
    int base2,height2;
        printf("Selected triangle is Isosceles triangle\n");
        printf("Enter Height and Base\n");
        scanf("%d %d", &height2,&base2);
        float area1= (float)(height2*base2)/2;
        printf("Area of Isosceles triangle is %f", area1);
        break;
case 3:
     int side1,side2, side3;
        printf("Selected Triangle has three sides\n");
        printf("Enter the length of side 1,2 and 3 respectively.\n");
        scanf("%d %d %d", &side1, &side2, &side3);
        float spm= (float)(side1+side2+side3)/2;
        float area2= (float)sqrt (spm*(spm-side1)*(spm-side2)*(spm-side3));
        printf("Area of the given triangleis %f", area2);
        break;
default:
    printf("Invalid Input!!");
    break;
    }
    printf("\nNirbhay Singh");
    return 0;
}
