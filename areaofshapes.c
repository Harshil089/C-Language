#include<stdio.h>
#include<math.h>
int main()
{
    double length, width,base,height,radius,arear;
    printf("Enter the radius of circle: \n");
    scanf("%lf",&radius);
    double areac=3.14*(pow(radius,2));
    printf("The radius of circle is:%lf\n",areac);
    printf("Enter length and width of rectangle:\n");
    scanf("%lf%lf",&length,&width);
    arear=length*width;
    printf("The area of rectangle is:%lf\n",arear);
    printf("Enter base and height of triangle:\n");
    scanf("%lf%lf",&base,&height);
    double areat=0.5*base*height;
    printf("The area of triangle is:%lf",areat);
    return 0;
}