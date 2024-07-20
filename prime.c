#include<stdio.h>
void main()
{
    int num,count=0;
    printf("Enter a number:\n");
    scanf("%d",&num);
    for(int i=0;i<=num;i++)
    {
        if(num%i==0)
        {
            count+=1;
        }
    }
    if(count==2)
    {
        printf("It is a prime number");
    }
    else
    {
        printf("It is not a prime number");
    }
}