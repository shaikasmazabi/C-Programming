#include<stdio.h>
void main()
{
    int x,y;
    int *a,*b;
    printf("Enter the value of 2 numbers : ");
    scanf("%d %d",&x,&y);
    a=&x;
    b=&y;
    printf("The sum of %d and %d is = %d",x,y,*a + *b);
}