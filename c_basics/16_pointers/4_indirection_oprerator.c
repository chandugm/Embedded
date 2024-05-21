//4 Declare 3 integer variables. Declare an integer pointer. Assign the address of each variable to the pointer in succession and print the value of the variable using indirection operator on the pointer.
#include<stdio.h>
#include<stdlib.h>
int main()
{
int a=1,b=2,c=3,*iptr=NULL;
iptr=&a;
printf("Address of a=%p \t value of a=%d\n",iptr,*iptr);
iptr=&b;
printf("Address of b=%p \t value of b=%d\n",iptr,*iptr);
iptr=&c;
printf("Address of c=%p \t value of c=%d\n",iptr,*iptr);
return 0;
}

