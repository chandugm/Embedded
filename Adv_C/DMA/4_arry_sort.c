//Create a dynamic array of integers. Take input from user , sort the array and display the output.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *arr;
	int num,i,j;
	printf("Enter number of elements\n");
	scanf("%d",&num);
	arr=(int *)malloc(num*sizeof(int));
	if (arr==NULL)
	{
		printf("memory not allocated\n");
		return 1;
	}
	printf("Enter elements in array\n");
	for(i=0;i<num;i++)
	{
		scanf("%d",&arr[i]);
	}

	for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(arr[i]>arr[j])
			{
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("printing sorting of array\n");
	for(i=0;i<num;i++)
	{
		printf("%d ",arr[i]);
	}
free(arr);
	return 0;
}
