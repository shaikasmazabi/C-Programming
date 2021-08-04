#include<stdio.h>
void main()
{
    int a;
    printf("Enter a number  : ");
    scanf("%d",&a);
    if(a>0)
        printf("The  number %d is a positive number ",a);
    else if(a==0)
        printf("The number %d is a Zero ",a); 
    else
        printf("The number %d is a negative number ",a);  
}