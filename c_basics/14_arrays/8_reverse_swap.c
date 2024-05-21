/*
8) Write a program to reverse an array and print it (Reverse the array by swapping both edges of the array and move inside and repeat till middle of the array):  
Input : array1 ={1,2,3,4,5};
Output : array1 = {5,4,3,2,1};
*/
#include<stdio.h>
int main()
{
	int size;
	printf("Enter size :");
	scanf("%d",&size);
	int a[size];
	for (int i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	for (int i=0;i<size/2;i++)
	{
		int temp=a[i];
		a[i]=a[size-i-1];
		a[size-i-1]=temp;
	}
	for (int i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
}
