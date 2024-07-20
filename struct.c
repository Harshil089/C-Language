#include<stdio.h>
struct Student
{
    char Name[30];
    int Roll;
    float Marks;
};
void main()
{

    struct Student S1,S2;
    printf("Enter the Name, Roll No. and Marks of 1st student: ");
    scanf("%s %d %f",&S1.Name,&S1.Roll,&S1.Marks);
    printf("Enter the Name, Roll No. and Marks of 2nd student: ");
    scanf("%s %d %f",&S2.Name,&S2.Roll,&S2.Marks);
    printf("Details of 1st Student are: \n");
    printf("Name = %s \n",S1.Name);
    printf("Roll No. = %d \n",S1.Roll);
    printf("Name = %2f \n",S1.Marks);
    printf("Details of 2nd Student are: \n");
    printf("Name = %s \n",S2.Name);
    printf("Roll No. = %d \n",S2.Roll);
    printf("Name = %2f \n",S2.Marks);
}