#include<stdio.h>
void main()
{
    int a,b,c,total;
    printf("Enter the 3 subjects marks : ");
    scanf("%d %d %d",&a,&b,&c);
    total=((a+b+c)/3);
    if(total>40 && a>33 && b>33 && c>33)
    {
        printf("The Student has passed the exam\n");
    }
    else 
    {
        printf("The student has failed the exam\n");
    }
}