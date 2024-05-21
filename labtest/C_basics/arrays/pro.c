#include<stdio.h>
int main()
{
	int n,b=1;
	printf("Enter size :");
	scanf("%d",&n);
	int arr[n];
	int pro[n];
	if (n<=1)
	{
		printf("Size must be greater than 1\n");
		return 0;
	}
	for (int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int j=0;j<n;j++)
{
pro[j]=1;
}
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			if (i==j)
			{
				continue;
			}
			else
		{
					pro[i]*=arr[j];
			}

		}
	}
	for (int i=0;i<n;i++)
	{
		printf("%d ",pro[i]);
	}
}

