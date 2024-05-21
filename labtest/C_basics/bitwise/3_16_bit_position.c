#include<stdio.h>
int setbit(int,int);
int main()
{
	int a,b;
	printf("Enter a and b values ");
	scanf("%d%d",&a,&b);
	int ret=setbit(a,b);
	if (ret==1)
	{
		printf("true");
	}
	else if(ret==0)
		printf("false");
	return 0;
}
int setbit(int a,int b)
{
	if(a&(0x1<<b))
	{
		return 1;
	}
	else if(b>15)
	{
		return 0;
	}
	else
		return 0;
}

