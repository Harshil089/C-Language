#include<stdio.h>
void main()
{
    int n,i,m,sum=0;
    printf("Enter a range from a to b: \n");
    scanf("%d %d",&n,&m);
    for(i=n;i<=m;i++)
    {
        if (i%2==0)
        {
            sum=sum+i;
        }
    } 
    printf("The sum of all the even numbers is: %d",sum);
}