#include<stdio.h>
int main()
{
    int num=0,count=0,count2=0,check2=0;
    
    printf("Enter binary number:\n");
    while (num!=-1)
    {
        scanf("%d",&num);
        if (num==1)
        {
            check2=0;
            while (check2==0)
            {
                scanf("%d",&num);
                if(num==0)
                {
                    count=count+1;
                }
                if(num==1)
                {
                    if(count2<=count)
                    {
                        count2=count;
                        count=0;
                        check2=1;
                    }  
                }
            }
        }       
      
    }
    
    printf("The lonngest distance between 0 and 1 is: %d\n",(count2));
    
    
    
}
