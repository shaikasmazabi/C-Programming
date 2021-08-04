#include<stdio.h>
void main()
{
    int n,rem,sum=0;;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Reverse of %d ",n);
    while(n)
    {   
    rem=n%10;
    sum=sum*10+rem;
    n=n/10;
    }
   
    printf(" is %d ",sum);
}