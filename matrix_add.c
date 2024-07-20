#include<stdio.h>
void main()
{
    int i,j,sum=0,k;
    int arr1[3][3];
    int arr2[3][3];
    int arr3[3][3];
    printf("Enter the elements of 3x3 matrix 1:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            {
                scanf("%d",&arr1[i][j]);
            }
    }
    printf("\n");
    printf("Enter the elements of 3x3 matrix 2:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            {
                scanf("%d",&arr2[i][j]);
            }
    }
    printf("Array 1 is:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            {
                printf("%d ",arr1[i][j]);
            }
        printf("\n");
    }
    printf("Array 2 is:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            {
                printf("%d ",arr2[i][j]);
            }
    printf("\n");
    }
    printf("\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            {
                arr3[i][j]=arr1[i][j]+arr2[i][j];
            }
    }
    
    printf("The new array after adding is: \n");
    
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            {
                printf("%d ",arr3[i][j]);
            }
            printf("\n");
    }
}