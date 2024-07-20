#include<stdio.h>
int main()
{
    int secs,min=0,hour=0,day=0;
    printf("Enter seconds:\n");
    scanf("%d",&secs);
    while (secs>60)
    {
    if (secs>=60&&secs<3600)
    {
        min=secs/60;
        secs=secs%60;
        printf("Total time is: %d minutes %d seconds",min,secs);
        break;
    }
    else if (secs>=3600&&secs<86400)
    {
        hour=secs/3600;
        secs=secs%3600;
        min=secs/60;
        secs=secs%60;
        printf("Total time is:%d hours %d minutes %d seconds",hour,min,secs);
        break;
    }
    else
    {
        day=secs/86400;
        secs=secs%8640;
        hour=secs/3600;
        secs=secs%3600;
        min=secs/60;
        secs=secs%60;
        printf("Total time is: %d days %d hours %d minutes %d seconds\n",day,hour,min,secs);
       
        break;
    }
     day=0,min=0,hour=0,secs=0;
    } 
}