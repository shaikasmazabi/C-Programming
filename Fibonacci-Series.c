#include<stdio.h>
int fibo(int n);

int fibo(int n)
{
    if(n<=1)
        return n;
    return fibo(n-1)+fibo(n-2);
}

void main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("%d ",fibo(n));

}
