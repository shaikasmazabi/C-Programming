#include<stdio.h>
void main()
{
    int a[8]={11,12,13,14,15,16,17,18};
     printf("The array elements before printing seperately are : ");
    for(int i=0;i<8;i++)
    {
       printf("%d ",a[i]);
    }
    printf("\n");
    for(int i=0;i<8;i++)
    {
        printf("\n%d\n",a[i]);
    }
}