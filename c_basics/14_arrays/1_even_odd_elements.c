/*1)  Write the following program :
Declare an integer array of size 100.
Assign numbers 1-100 to each element of the array.
Print all the numbers.
Print all even elements.
Print all odd elements.
Add 5 to each element and print 6 – 105 numbers.*/
#include<stdio.h>
int main()
{
	int arr[100];
	for (int i=0;i<=99;i++)
	{
		arr[i]=i+1;
	}
	printf("All numbers :");
	for (int i=0;i<100;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n\n\nAll even Elements :");
	for (int i=0;i<100;i++)
	{
		if(arr[i]%2==0)
			printf("%d ",arr[i]);
	}
	printf("\n\n\nAll odd Elements :");
	for (int i=0;i<100;i++)
	{
		if(arr[i]%2!=0)
			printf("%d ",arr[i]);
	}
	printf("\n\n\nprint 6-105 numbers:");
	for (int i=0;i<100;i++)
	{
		printf("%d ",arr[i]+5);
	}
	printf("\n");
	return 0;
}


