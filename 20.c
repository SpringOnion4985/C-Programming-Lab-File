#include <stdio.h>
int main()
{
   printf("Nirbhay Singh\n");
   int a,b,c,d;
   printf("enter a and b\n");
   scanf("%d%d",&a,&b);
   c=a++;d=b--;
   printf(" ORIGINAL VALUE OF a AND b: %d and %d\n",c,d);
   printf("NEW VALUES OF a AND b ARE: %d and %d",a,b);
   return 0;
}
