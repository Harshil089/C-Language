#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,prod=1;
    printf("Enter the length and width of the rectangle:\n");
    scanf("%d%d",&a,&b);
    prod=a*b;
    printf("The area of rectangle is:%f",(double)prod);
}