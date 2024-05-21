/*
6) Write a function to search for a specific element given by the user, in an array and display its index.  Function takes array and element to search as inputs, and returns the index as output. If element not found, return -1.
*/
#include<stdio.h>
int search(int,int arr[],int);
int main()
{
	int size,ele;
//	int arr[size];
	printf("Enter size :");
	scanf("%d",&size);
	int arr[size];
	for (int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter specific element :");
	scanf("%d",&ele);
	int r=search(ele,arr,size);
	if (r==-1)
	{
		printf("Element not found\n");
	}
	else
	{
		printf("element matched at index value %d\n",r);
	}
	return 0;
}
int search(int ele,int arr[],int size)
{
	for (int i=0;i<size;i++)
	{
		if (ele == arr[i])
		{
			return i;
		}
	}

	{
		return -1;
	}
}

