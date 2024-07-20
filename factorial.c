#include<stdio.h>
void main()
{
    int num, fact=1, i=0;
    printf("Enter a number:\n");
    scanf("%d",&num);
    if (num>0)
    {   
    for(i=1;i<=num;i++)
    {
        fact*=i;
    }
    printf("The factorial of %d is %d",num,fact);
    }
    else{
        printf("Invalid input!");
    }
}