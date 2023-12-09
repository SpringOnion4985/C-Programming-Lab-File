#include <stdio.h>
int main()
{
    double length, width, height;

    printf("Enter the length of the cuboid: ");
    scanf("%lf", &length);

    printf("Enter the width of the cuboid: ");
    scanf("%lf", &width);

    printf("Enter the height of the cuboid: ");
    scanf("%lf", &height);

    double surface_area = 2 * (length * width + width * height + height * length);
    double volume = length * width * height;

    printf("The surface area of the cuboid is %lf square units.\n", surface_area);
    printf("The volume of the cuboid is %lf cubic units.\n", volume);
    printf("Nirbhay Singh");
    return 0;
}
