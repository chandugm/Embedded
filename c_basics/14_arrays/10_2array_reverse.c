/*
10) Write a program to swap two arrays in reverse order.
eg.,
input :
array1 = {1,2,3,4,5};
array2 = {6,7,8,9,10};
output:
array1 : {10,9,8,7,6}
array2: { 5,4,3,2,1}
*/
#include<stdio.h>
int main()
{
	int size;
	printf("Enter size :");
	scanf("%d",&size);
	int arr1[size];
	int arr2[size];
	printf("Enter array1\n");
	for (int i=0;i<size;i++)
	{
		scanf("%d",&arr1[i]);
	}
	printf("Enter array2\n");
	for (int i=0;i<size;i++)
	{
		scanf("%d",&arr2[i]);
	}
	for (int i=0;i<size;i++)
	{
		int temp;
		temp=arr1[i];
		arr1[i]=arr2[size-1-i];
		arr2[size-i-1]=temp;
	}

	printf("array1:");
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr1[i]);
	}
	printf("\narray2:");
	for(int i=0;i<size;i++)
	{
		printf("%d ",arr2[i]);
	}
	printf("\n");
}

