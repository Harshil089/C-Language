#include<stdio.h>
int main()
{
    int num,num2,num3,count=0,count2=0,check=1,check2=0;
    
    printf("Enter a binary number:\n");
    while (check==1)
    {
        scanf("%d",&num);
        scanf("%d",&num);
        if (num==1&&num2==0)
        {
            check2=0; count=1;
            while (check2==0)
            {
                // count=1;
                scanf("%d",&num);
                if(num==0)
                {
                    count=count+1;
                }
                if(num==1)
                {
                    if(count2<count)
                    {
                        count2=count;
                        count=0;
                        check2=1;
                    }  
                }
            }
        }
        else if (num==1&&num2==1)
        {
            num3=num2;
        }
        
            if (num==-1)
            {
                check=0;
            } 
        
    }
    printf("The lonngest distance between 0 and 1 is: %d\n",(count2));
    
    
    
}