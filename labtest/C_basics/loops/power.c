#include<stdio.h>
int main()
{
	int i,j,a,b,sum=0;
	printf("Enter two numbers :");
	scanf("%d%d",&a,&b);
	for(i=1;i<=b;i++)
	{
		for (j=a;j<=i;j++)
		{
			sum+=a;
		}
	}
	printf("%d\n",sum);
	return 0;
}
