#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter the 1st number.");
  scanf("%d",&a);
  printf("Enter the 2nd number.");
  scanf("%d",&b);
  printf("Enter the 3rd number.");
  scanf("%d",&c);
  if(a>b && a>c)
  {
      printf("%d is greater than %d and %d.",a,b,c);
  }
  else if(b>a &&b>c)
  {
      printf("%d is greater than %d and %d.",b,a,c);
  }
  else{
     printf("%d is greater than %d and %d.",c,b,a);
  }
  printf("\nNirbhay Singh");
  return 0;
}
