#include<stdio.h>
int main()
{
    int a,sum=0;
    printf("Enter a number:");
    scanf("%d",&a);
    // for (int i = 0; i <=a; i++)
// {
    //     sum=sum+i;
    // }
    while (a!=0)

    {
        sum=sum+a;
        a--;
    }
    
    printf("%d",sum);
}