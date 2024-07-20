#include<stdio.h>
#include<math.h>
void main()
{
    int dec=0,p=0,check=1;
    int bin[30],n;
    printf("Enter a binary number, input -1 to stop inputting:\n");
    while (p < 30) 
    {
        printf("Enter number: ");
        scanf("%d", &n);

        if (n == -1) {
            break;
        }

        bin[p++] = n;
    }

    printf("Numbers entered are:\n");
    for (int i = 0; i < p; i++) 
    {
        printf("%d",bin[i]);
    }
    printf("\n");
    printf("Its decimal equivalent is:\n");
    for (int i = 0; i < p; i++) 
    {
        dec=dec+(bin[i]*pow(2,(p-1)));
        p--;
    }
    printf("%d",(dec+1));
}