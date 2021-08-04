#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    printf("Before Swapping the numbers are %d and %d \n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("After Swapping the numbers are %d and %d \n",a,b);

}