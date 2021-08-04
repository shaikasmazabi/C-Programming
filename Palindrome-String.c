#include<stdio.h>
#include<string.h>
void main()
{
    char str[100],l;
    int flag;
    printf("Enter the String : ");
    scanf("%[^\n]s",&str);
    l=strlen(str);
    for(int i=0;i<l;i++)
    {
        if(str[i]!=str[i])
        {
            flag=1;
            break;
        }
       
    }
     if(flag==1)
        printf(" Not a Plaindrome");
        else
        printf("Palindrome");
}