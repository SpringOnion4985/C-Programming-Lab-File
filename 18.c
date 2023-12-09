#include <stdio.h>
int main()
{
   printf("Nirbhay Singh\n");
   int a,b,c;
   printf("Enter the number\n");
   scanf("%d",&a);
   printf("Enter digit to be right shifted\n");
   scanf("%d",&b);
  c= a>>b;
   printf("After right shift number becomes: %d",c);

    return 0;
}
