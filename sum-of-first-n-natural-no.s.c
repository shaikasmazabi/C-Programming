#include<stdio.h>
void main()
{
    int i=0,n;
    printf("Enter n number : ");
    scanf("%d",&n);
    while(i<=n)
    {
        i=i+1;
    }
    printf("Sum of first %d natural numbers is %d\n",n,i);
}