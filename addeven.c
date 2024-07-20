#include<stdio.h>
void main()
{
    int num=1,check=0,sum=0;
    printf("Enter -1 for terminatting the loop\n");
    while (check==0)
    {
        scanf("%d",&num);
        if(num>=0)
        {
            if(num%2==0)
            {
                sum+=num;
            }
        }
        else
        {
            check=1;
        }
    }
    printf("The sum of even numbers is %d",sum);
    
    
}