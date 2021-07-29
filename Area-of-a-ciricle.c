#include<stdio.h>
#define PI 3.14
void main()
{
    float a,r;
    printf("The radius of the circle is : ");
    scanf("%f",&r);
    a=PI*r*r;
    printf("The area of the circle is : %f\n",a);
}