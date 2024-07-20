#include<stdio.h>
int main(void)
{
    char name[20];
    printf("Enter your name: ");
    fgets(name,20,stdin);
    // fgets is used to read a string or a text line up to n characters 
    // from a specified file or the console, and then it stores that value
    // into the specified string variable.
    printf("Your name is %s",name);
}