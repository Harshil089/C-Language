#include<stdio.h>
#include<math.h>
void main()
{
    int n,dec=0,i=0,rem=0;
    printf("Enter a binary number:\n");
        scanf("%d",&n);
            while(n!=0)
            {   
                rem=n%10;
                dec=dec+(rem*pow(2,i));
                i=i+1;
                n=n/10;
            }
    printf("Decimal Equivalent is : %d",dec);
        
            
    
}