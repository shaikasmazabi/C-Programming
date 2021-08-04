#include<stdio.h>
void main()
{
    int i=0,n;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n!=0)
    {
        n=n/10;
        ++i;
    }
    printf("The Number of digits is : %d\n",i);
}



