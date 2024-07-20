#include<stdio.h>
int main(void)
{
    char name[100],address[100], month[100];
    int custid=0,pin=0;
    double billamt=0.0;
    printf("Enter your name:\n");
    fgets(name,100,stdin);
    printf("Enter month of bill:\n");
    fgets(month,100,stdin);
    printf("Enter your adress:\n");
    fgets(address,100,stdin);
    printf("Enter your customer id:\n");
    scanf("%d",&custid);
    printf("Enter the pin code:\n");
    scanf("%d",&pin);
    printf("Enter the bill amount:\n");
    scanf("%lf",&billamt);
    printf("Name: %s\n",name);
    printf("Address: %s\n",address);
    printf("Pin Code: %d\n",pin);
    printf("Customer ID: %d\n",custid);
    printf("Month of bill: %s\n",month);
    printf("Bill Amount: %lf\n",billamt);
    return 0;
}