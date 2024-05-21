/*
5
5 4
5 4 3
5 4 3 2
5 4 3 2 1
*/
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter a number :");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for (j=0;j<=i;j++)
		{
			printf("%d ",n-j);
		}
		printf("\n");
	}
	return 0;
}
