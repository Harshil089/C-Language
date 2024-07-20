#include<stdio.h>
void main()
{
    int n,max=1,min=0,i,m;
    printf("Enter the array size: \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elelments: \n");
    for ( i = 0; i < n ; i++)
    {
        scanf("%d",&m);
        arr[i]=m;
    }
    max=arr[0];min=arr[0];
    for (i = 0; i < n; i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }
        if (arr[i]>max)
        {
            max=arr[i];
        }   
    }
     printf("The Maximum and minimum is %d %d",max,min);
}