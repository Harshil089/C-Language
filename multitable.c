#include<stdio.h>
void main()
{
    int n,i,j,prod=1;
    printf("Enter a number: \n");
    scanf("%d",&n);
    printf("The multiplication table is as follows:\n");
    for ( i = 0; i <= 10; i++)
    {
        printf("%d * %d = %d\n",n,i,(i*n));
    }
    
}