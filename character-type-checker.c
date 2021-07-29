#include<stdio.h>
void main()
{
    char ch;
    printf("Enter a character : ");
    scanf("%c",&ch);

    /*Control Characters (0–31 & 127):
    Control characters are not printable characters. 
    They are used to send commands to the PC or the printer and are based on telex technology.
    With these characters, you can set line breaks or tabs.
    Today, they are mostly out of use. */

    /*Special Characters (32–47 / 58–64 / 91–96 / 123–126): 
    Special characters include all printable characters that are neither letters nor numbers.
    These include punctuation or technical, mathematical characters. 
    ASCII also includes the space (a non-visible but printable character), and, 
    therefore, does not belong to the control characters category, as one might suspect. */
   
    if(ch>=0 && ch<=31 && ch==127)
        printf("The character %c is a control character ",ch);
    else if(ch>=32 && ch<=47 || ch>=58 && ch<=64 || ch>=91 && ch<= 96 || ch>=123 && ch<=126)
        printf("The character %c is a special character ",ch);
    else if(ch>=65 && ch<=90 || ch>=97 && ch<=122)
        printf("The character %c is a alphabet ",ch);
    else
        printf("The character %c is a number ",ch);
}