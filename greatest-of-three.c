#include<stdio.h>
void main()
{
    int a,b,c,max;
    printf("Enter three numbers : ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c)
    max=a;
    else if(b>a && b>c)
    max=b;
    else
    max=c;
    printf("The greatest of %d, %d and %d is %d\n",a,b,c,max);
}