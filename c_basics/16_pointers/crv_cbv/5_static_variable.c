/*"Write a function that communicates with main using a single static variable without taking any input arguments.
Everytime function returns something using the static variable,after using it, main sends another input using the same variable and calls the function again.
eg., print the square of each number of an array :
for each number of the array :
    call the function
    main gets the static variable address as return value from function.
    main puts the array element in static variable.
in the function :
    create static variable.
    if static variable value is not zero, print its square.
    function sends static variable address back to main."*/
#include<stdio.h>
void *fun();
int main()
{
	int *a,n;
	printf("Enter the size of array:");
	scanf("%d",&n);
	int arr[n];	
	printf("Enter elements in array:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	a=fun();
	for(int i=0;i<n;i++)
	{	
		*a=arr[i];
		fun();	
	}
}

void *fun()
{
	static int b;
	if (b>0)
		printf("square of=%d",b*b);
	return &b;
}

