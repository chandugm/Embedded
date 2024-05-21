/*

*
* *
* * *
* * * *
* * * * *
 */
#include<stdio.h>
int main()
{
	int i=0,j,n;
	printf("Enter a number :");
	scanf("%d",&n);
	while(i<n)
	{
		j=0;
		while (j<=i)
		{
			printf("* ");
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
