#include<stdio.h>
int gcd(int a, int b);
int lcm(int a, int b);

int gcd(int a, int b)
{
    if(a==0)
        return b;
    return gcd(b%a,a);
    
}

int lcm(int a, int b)
{
    return ((a*b)/gcd(a,b));
}
void main()
{
    int a,b,lcm_n,gcd_n;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    
    gcd_n=gcd(a,b);
    lcm_n=lcm(a,b);
    printf("lcm is %d\n",lcm_n);
    printf("gcd is %d\n",gcd_n);
}