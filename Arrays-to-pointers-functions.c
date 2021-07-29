#include<stdio.h>
//void arr(*ptr,n);
void arry(int *ptr, int n)
{
    for(int i=0;i<n;i++)
    {
        printf("The value of element %d is %d\n", i+1,*(ptr+i));
       //or
       //printf("The value of element %d is %d\n",i+1,ptr[i]); 

    }
}
void main()
{
    int arr[]={11,12,13,14,15,16,17,18,19,20};
    arry(arr,10);
}