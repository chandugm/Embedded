/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
*/
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter a number :");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	{
		for (j=0;j<i;j++)
		{
			printf("%d ",j+1);
		}
		printf("\n");
	}
	return 0;
}
