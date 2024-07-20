#include<stdio.h>
#include<math.h>
int main()
{
    double length, width,base,height;
    int radius;
    double arear;
    printf("Enter the radius of circle: \n");
    scanf("%d",&radius);
    printf("The radius of circle is:%f\n",(3.14*(pow(radius,2))));
    printf("Enter length and width of rectangle:\n");
    scanf("%lf%lf",&length,&width);
    printf("The area of rectangle is:%lf\n",(length*width));
    printf("Enter base and height of triangle:\n");
    scanf("%lf%lf",&base,&height);
    printf("The area of triangle is:%lf",(0.5*base*height));
    return 0;
}