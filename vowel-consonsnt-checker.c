#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);
    if(ch>=97 && ch<=122)
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o'|| ch=='u')
            printf("The character %c  is a lower case vowel",ch);
        else
            printf("The character %c is a lower case consonant",ch);
    }
    if(ch>=65 && ch<=90)
    {
        if(ch=='A' || ch== 'E' || ch== 'I' || ch == 'O' || ch == 'U')
            printf("THe character %c is a upper case vowel",ch);
        else
            printf("The character %c is a upper case consonant",ch);
        
    }
}