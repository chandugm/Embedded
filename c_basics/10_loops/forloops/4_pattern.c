/*print the below patterns wihtout using nested for loop:
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
*/
#include<stdio.h>
int main()
{
	int a=0,i=1,c=1,j=1,n;
	printf("Enter a number :");
	scanf("%d",&n);
	for (i=1;i>=j;i++,j++)
	{
		a=c+j;
		if (a%2==0)
			printf("1 ");
		else
			printf("0 ");
		if (c==j)
		{
			c++;
			j=0;
			printf("\n");
		}
		if(c==n+1)
		{
			return 0;
		}
	}
	return 0;
}
