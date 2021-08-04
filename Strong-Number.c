#include<stdio.h>
int factorial();
int factorial(int x)
{
    if(x==0)
        return 1;
    else
        return x*factorial(x-1);
}
void main()
{
    int n,rem,sum=0,i,fact,temp1;
    printf("Enter a number : ");
    scanf("%d",&n);
    temp1=n;
    while(n!=0)
    {
        rem=n%10;
        fact=factorial(rem);
        
        sum=sum+fact;
        n=n/10;
    }
    if(temp1==sum)
        printf("%d is a Strong Number ",temp1);
    else
        printf("%d is not a Strong Number ",temp1);
  
}