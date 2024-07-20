#include<stdio.h>
void main()
{
    int i,j,sum=0,k;
    int arr1[2][2];
    int arr2[2][2];
    int arr3[2][2];
    printf("Enter the elements of 2x2 matrix 1:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            {
                scanf("%d",&arr1[i][j]);
            }
    }
    printf("\n");
    printf("Enter the elements of 2x2 matrix 2:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            {
                scanf("%d",&arr2[i][j]);
            }
    }
    printf("Array 1 is:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            {
                printf("%d ",arr1[i][j]);
            }
        printf("\n");
    }
    printf("Array 2 is:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            {
                printf("%d ",arr2[i][j]);
            }
    printf("\n");
    }
   for(i=0; i<2; i++)
    {
        for (k = 0; k < 2; k++)
        {
        
            for(j=0; j<2; j++)
                {
                    sum=sum+(arr1[i][j]*arr2[j][k]);
                }
            arr3[i][k]=sum;
            sum=0;
        }
    }
    printf("\n");

     for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            {
                printf("%d ",arr3[i][j]);
            }
    printf("\n");

}
}