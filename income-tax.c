#include<stdio.h>
void main()
{
    float i,t;
    printf("Enter your annual income : ");
    scanf("%f",&i);
    if(i>250000 && i<500000)
        t=i*0.05;
    else if(i>500000 && i<1000000)
        t=i*0.2;
    else if(i>1000000)
        t=i*0.3;
    else
        t=i*0;
    printf("The tax amount to be paid is %f",t);
}