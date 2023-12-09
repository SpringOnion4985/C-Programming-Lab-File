#include <stdio.h>
int main()
{
    printf("Nirbhay Singh\n");
    int n,m;
    printf("Enter the number: \n");
    scanf("%d",&n);
    printf("Number till u want to multiply: \n");
    scanf("%d",&m);
    printf("The output is: \n");
    for(int i=1;i<=m;i++){
        printf("%d*%d=%d\n",n,i,i*n);
    }

   return 0;
}
