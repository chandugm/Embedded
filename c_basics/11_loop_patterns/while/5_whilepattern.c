/*using while ,do while and for loops :
    *
   * *
  * * *
 * * * *
* * * * *
*/
#include<stdio.h>
int main()
{
	int i=0,j,k,n;
	printf("Enter a number :");
	scanf("%d",&n);
	while (i<n)
	{j=1;k=0;
		while(j<n-i)
		{
			printf(" ");
			j++;
		}
		while (k<=i)
		{
			printf("* ");
			k++;
		}
		printf("\n");
		i++;
	}
	return 0;
}

