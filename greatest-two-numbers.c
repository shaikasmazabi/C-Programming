#include<stdio.h>
void main()
{
    int a,b,max;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    if(a>b)
        max=a;
    else
        max=b;
    printf("The greatest of %d and %d is %d\n",a,b,max);

}