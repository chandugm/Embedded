#include<stdio.h>
int main()
{
	int a,cn=0,max=0;
	printf("ENter a number");
	scanf("%d",&a);
	for(int i=0;i<a;i++)
	{
		if (a&(0x1<<i))
		{
			cn++;
		}
		else
		{
			if (max<cn)
			{
				max=cn;
			}
			cn=0;
		}
	}
printf("%d",max);
}
