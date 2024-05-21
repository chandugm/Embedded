/*
without using nested loops :
*
* *
* * *
* * * *
* * * * *
*/
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter a number :");
	scanf("%d",&n);
	for (i=0,j=0;i<n;)
	{
		if (j<=i){
			printf("* ");
			j++;
			continue;
		}
	i++;
	j=0;
	printf("\n");
	}
	return 0;
}	
