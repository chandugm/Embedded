#include<stdio.h>
int main()
{
	int size;
	printf("Enter size of an array :");
	scanf("%d",&size);
	int arr[size];
	printf("ENter array elements :");
	for (int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for (int i=0;i<size-1;i++)
	{



		for (int j=i+1;j<size;j++)
		{
			if(arr[i]==0){
				int temp=arr[j];

				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}
	for(int k=0;k<size;k++)
	{
		printf("%d",arr[k]);
	}
}

