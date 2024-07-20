#include<stdio.h>
int swap(int a, int b)
{
    int dup=0;
    dup=a;
    a=b;
    b=dup;
    return(printf("After swap, the numbers are : %d %d",a,b));
}
void main()
{
    int n1,n2;
    printf("Enter 2 numbers:\n");
    scanf("%d %d",&n1,&n2);
    swap(n1,n2);
}