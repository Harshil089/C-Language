#include<stdio.h>
void main()
{
    char name1[5]="straw", name2[5]="trads",l;
    int i,j,count=0;
    for (i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if (name2[j]==name1[i])
            {
                name2[j]=0;
            }
        }
    }
    for ( i = 0; i < 5; i++)
    {
        if (name2[i]!=0)
        {
            count++;
        }
        
    }
    if (count>0)
    {
        printf("Not same.\n");
    }
    else{
        printf("Same.\n");
    }
    

}