#include<stdio.h>
int main()
{
	int a,cn=0;
	printf("Enter a number:");
	scanf("%d",&a);
	while(a!=0)
	{
		a=a&(a-1);
		cn++;
	}
	printf("count of ones:%d\n",cn);
	return 0;
}
