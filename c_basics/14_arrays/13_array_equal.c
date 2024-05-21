//13) write a function to take 2 arrays as input and return 1 if they are equal and 0 if they are not equal ( sizes to be sent as seperate arguments)

#include<stdio.h>
int compare(int arr1[],int,int arr2[],int);
int main()
{
	int size1;	
	printf("Enter size1 :");
	scanf("%d",&size1);
	int arr1[size1];
	for (int i=0;i<size1;i++)
	{
		scanf("%d",&arr1[i]);
	}
	int size2;	
	printf("Enter size2 :");
	scanf("%d",&size2);
	int arr2[size2];
	for (int i=0;i<size2;i++)
	{
		scanf("%d",&arr2[i]);
	}
	int r=compare(arr1,size1,arr2,size2);
	if (r==1)
	{
		printf("Both are equal\n");
	}
	else
		printf("both are not equal\n");
}
int compare(int arr1[],int size1,int arr2[],int size2)
{
	if (size1!=size2)
	{
		return 0;
	}
	for (int i=0;i<size1;i++)
	{
		if(arr1[i]!=arr2[i])
		{
			return 0;
		}

	}
	return 1;
}


