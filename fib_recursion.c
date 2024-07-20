#include<stdio.h>
    int recur(int n)
    {
        if(n==0)
        {
            return 0;
        }
        else if (n==1)
        {
            return 1;
        }
        else
        {
            return (recur(n-1)+recur(n-2));
        }
    }
    int main()
    {
        int a,i;
        printf("Enter length of Fibonacci Series:");
        scanf("%d",&a);
        for(i=0;i<a;i++)
        {
            printf("%d ",recur(i));
        }
    }