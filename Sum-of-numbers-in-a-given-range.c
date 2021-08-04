#include<stdio.h>
void main()
{
    int a,n,sum,i;
    printf("Enter the range of the numbers : ");
    scanf("%d %d",&a,&n);
    for(i=a;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum is %d : ",sum);
}