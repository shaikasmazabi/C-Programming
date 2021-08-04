#include<stdio.h>
int factorial();
int factorial(int n)
{
    if(n!=0)
    {
        return n*factorial(n-1);
    }
    else
        return 1;
    
}
void main()
{
    int fact,i,n;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Factorial of %d is : %d\n",n,factorial(n));
}