/*
 * * * * *
 * * * *
 * * *
 * *
 *
 */
#include<stdio.h>
int main()
{
	int i=0,j,n;
	printf("Enter a number :");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		for (j=n;j>i;j--)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
