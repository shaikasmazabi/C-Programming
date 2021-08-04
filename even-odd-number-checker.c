#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if((n%2)==0)
        printf("The number %d is a even number ",n);
    else
        printf("The number %d is an odd number ",n);
}