#include<stdio.h>
void main()
{
    int year;
    printf("Enter an year:\n");
    scanf("%d",&year);
    if(year%4==0||year%400==0)
    {
        if (year%100==0)
        {
            printf("It is not a leap year");
        }
        else
        {
            printf("It is a leap year");
        }
        
    }
    else
    {
        printf("It is not a leap year");
    }
    }