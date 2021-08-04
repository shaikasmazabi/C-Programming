#include<stdio.h>
void main()
{
    int a,b,c;
    printf("Enter two  numbers : ");
    scanf("%d %d",&a,&b);
    printf("Before Swapping the numbers are %d and %d \n",a,b);
    c=a;
    a=b;
    b=c;
    printf("After Swapping the numbers are %d and %d \n",a,b);
}