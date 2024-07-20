#include<stdio.h>
int main()
{
    int a,b;
    double div=0;
    printf("Enter 2 numbers: ");
    scanf("%d %d",&a,&b);
    div=(double)a/(double)b;
    printf("The sum of the two numbers is %d\n",(a+b));
    printf("The difference of the two numbers is %d\n",(a-b));
    printf("The product of the two numbers is %d\n",(a*b));
    if (b!=0)
    {
        printf("The division of the two numbers is %lf",div);
    }
    else
    {
        printf("the second number should not be 0.");
    }
    
    
    
}