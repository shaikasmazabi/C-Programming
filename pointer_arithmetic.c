#include<stdio.h>
void main()
{
    int i=25;
    int *ptr;
    ptr=&i;
    printf("The vale of i is %d\n",i);
    printf("The address of i is %d\n",&i);
    printf("THe vale of ptr is %u\n",ptr);
    printf("The value of *ptr is %u\n",*ptr);
    printf("Size of int type is %d\n",sizeof(int));
    ptr++;
    //printf("\nI have done increment of ptr using pointer arithmetic concept\n ");
    printf("Value of ptr after increment is %u\n",ptr);

}