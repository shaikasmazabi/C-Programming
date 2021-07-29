#include<stdio.h>
void main()
{
    int i,n,t;
    printf("Multiplication table of n : ");
    scanf("%d",&n);
    for(i=0;i<=10;i++)
    {
        t=n*i;
        printf("%d * %d = %d\n",n,i,t);
    }
}
