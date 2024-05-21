#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		if (i%2==0)
			printf("$# ");
		else
		{
			printf("$");
			for (int j=i+1;j>=1;j--)
			{
				printf("#");
			}
		}
		printf(" ");
	}
}

