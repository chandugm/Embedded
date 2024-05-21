#include<stdio.h>
int main()
{
	for(int i=0;i<=31;i++)
	{
		printf("%d-%X\n",i,~((0x1)<<i));
	}
}

