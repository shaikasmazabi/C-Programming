#include<stdio.h>
void reverse(char *a)
{
    if(*a)
    {
        reverse(a+1);
        printf("%c",*a);
    }
}

void main()
{
    char a[100];
    printf("Input String : ");
    scanf("%[^\n]s",&a);
    printf("Reverse of the string %s ",a);
    printf("is ");
    reverse(a);
    
}