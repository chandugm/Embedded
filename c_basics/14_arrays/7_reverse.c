//7) Write a program to print an array in reverse order
#include<stdio.h>
int main()
{
	int size;
	printf("Enter size :");
	scanf("%d",&size);
	int arr[size];
	for (int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for (int i=1;i<=size;i++)
	{
		printf("%d ",arr[size-i]);
	}
	return 0;
}

