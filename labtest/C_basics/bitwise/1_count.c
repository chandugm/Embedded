#include<stdio.h>
int main()
{
	int a,cn=0;
	printf("Enter a number ");
	scanf("%d",&a);
	while(a!=0)
	{
		cn++;
		a=a&(a-1);
	}
	printf("%d",cn);
}
