#include<stdio.h>
void main()
{
    char c;
    printf("Enter a character : ");
    scanf("%c",&c);
    if(c>=92 && c<=122)
    printf("The given character %c is a Lower case character",c);
    else
    printf("The given character %c is not a Lower case character",c);
}