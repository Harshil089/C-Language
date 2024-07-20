#include<stdio.h>
void main()
{
    int a=0,b=1,c=0,n,i;
    printf("How many numbers of Fibonacci Series you want to generate:\n");
    scanf("%d",&n);
    printf("The series geenerated is as follows:\n");
    printf("0, 1, ");
    for(i=1;i<=n-2;i++)
    {
        c=a+b;
        if (i==(n-2))
        {
            printf("%d ",c);
        }
        else
        {
            printf("%d, ",c);
        }
        a=b; 
        b=c;
    }
}
