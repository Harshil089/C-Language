#include<stdio.h>
#include<math.h>
void main()
{
    int bin[8],n,rem=0,i=0,j;
    printf("Enter decimal number:\n");
    scanf("%d",&n);
    while (n!=0)
    {
        rem=n%2;
        bin[i]=rem;
        n=n/2;
        i++;
    }
    printf("Binary number is:\n");
    for(j=(i-1);j>=0;j--)
    {
        printf("%d",bin[j]);
    }
}