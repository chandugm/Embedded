//12) Write a function to modify the array such that all negative numbers are converted to positive.
#include<stdio.h>
void negative_to_positive(int arr[],int);
int main()
{
	int size;
	printf("Enter size :\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter elements\n");
	for (int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	negative_to_positive(arr,size);
}
void negative_to_positive(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		if (arr[i]<0)
			arr[i]*=-1;
	}
	printf("After changing :");
	for (int j=0;j<size;j++)
	{
		printf("%d ",arr[j]);
	}
	printf("\n");
}
