/* print the below patterns using nested for loop and break:
   1
   1 2
   1 2 3
   1 2 3 4
   1 2 3 4 5
 */
#include<stdio.h>
int main()
{
	int i,j,num;
	printf("Enter two numbers :");
	scanf("%d",&num);
	for (i=1;i<=num;i++)
	{
		for (j=1;j<=i;j++)
		{

			if (j>i)
			{
				break;
			}
			printf("%d ",j);
		}
		printf("\n");
	}
	return 0;
}
