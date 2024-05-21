//9 Declare an integer array of size 10 and initialize it to some values. Print the addresses of each element of the array using a pointer. using indirection operator , print the value stored in each element of the array.
#include<stdio.h>
#include<stdlib.h>
int main()
{
int arr[10]={1,2,3,4,5,6,7,8,9,10},*ptr=NULL;
int i;
ptr=&arr[i++];

//printf("Address of %p\t value=%d\n",ptr,arr[i]);
for(i=0;i<10;i++)
{
//ptr=&arr[i];
printf("Address of %p\t value=%d\n",ptr,arr[i]);
}
return 0;
}
