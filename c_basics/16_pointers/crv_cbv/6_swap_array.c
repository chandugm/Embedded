//6) Write two source files, main.c and swap.c. The main function initializes a two-element array of ints, and then calls the swap function to swap the pair.
#include<stdio.h>
void swap(int *p);
int main()
{
int arr[2]={25,50};
swap(arr);
printf("after swap :arr[0]=%d\t arr[1]=%d\n",arr[0],arr[1]);
return 0;
}
