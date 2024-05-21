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
	int i=0,j,k,n;
	printf("Enter a number :");
	scanf("%d",&n);
	while (i<n)
	{
		j=0,k=0;
		while (j<i)
		{
			printf("  ");
			j++;
		}
		while (k<n-i)
		{
			printf("* ");
			k++;
		}
		printf("\n");
		i++;
	}
	return 0;
}
