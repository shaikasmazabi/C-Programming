#include<stdio.h>
void main()
{
    float p,t,r,si;
    printf("Enter the principle amount, time and rate of interest : ");
    scanf("%f %f %f",&p,&t,&r);
    si=(p*t*r)/100;
    printf("The Simple interest is %f",si);
    printf("The total amount is %f",si+p);
}