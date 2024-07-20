#include<stdio.h>
int main()
{
FILE *fp;
fp=fopen("sample2.txt","w");
fread(fp,"r");
fclose(fp);
// char message[50];
// fp=fopen("Sample1.txt","r");
// printf("%s",fgets(message,5,fp));
// fclose(fp);
}