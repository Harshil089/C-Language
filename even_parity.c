#include<stdio.h>
int main()
{
    int num,count=0,check=1;
    
    printf("Enter a binary number:\n");
    while (check==1)
    {
        scanf("%d",&num);
        count=count+1;
        if (num==-1)
        {
            check=0;
        }
        
    }
        
    
    printf("Total number of 1s are: %d\n",count);
    
}