#include<stdio.h>
void main()
{
    int a,i,n;
    printf("Enter a number : ");
    scanf("%d",&a);
    for(i=10;i>=0;i--)
    {
        n=a*i;
        printf("%d * %d = %d\n",a,i,n);
    }
}