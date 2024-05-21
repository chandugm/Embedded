//2. WAP whether a number is ODD or EVEN using bitwise.
#include<stdio.h>
int main()
{
	int a;
	printf("Enter a value :");
	scanf("%d",&a);
	if(a&(0x1))
	{
		printf("ODD\n");
	}
	else
	{
		printf("EVEN\n");
	}
	return 0;
}
