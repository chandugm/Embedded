//5 Declare 3 pointer variables of integer type, and an integer variable. Assign the address of integer variable to the 3 pointers. Print the variable value using indirection on each pointer variable. Change the variable value directly and check the values of each of the pointers using indirection. Change the variable value , using each pointer and print the variable value and indirected values of all pointers every time you change.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n=11,*p1=&n,*p2=&n,*p3=&n;
	printf("indirection values:n=%d 1=%d 2=%d 3=%d\n",n,*p1,*p2,*p3);
	n*=2;
	printf("indirection values:n=%d 1=%d 2=%d 3=%d\n",n,*p1,*p2,*p3);
	*p1*=2;
	printf("indirection values:n=%d 1=%d 2=%d 3=%d\n",n,*p1,*p2,*p3);
	*p2*=2;
	printf("indirection values:n=%d 1=%d 2=%d 3=%d\n",n,*p1,*p2,*p3);
	*p3*=2;
	printf("indirection values:n=%d 1=%d 2=%d 3=%d\n",n,*p1,*p2,*p3);
	return 0;
}
