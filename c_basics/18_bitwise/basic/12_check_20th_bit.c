//12. WAP Check if the 20th bit of a 32-bit integer is on or off?

#include<stdio.h>

int main()
{
	int value;
	printf("Enter value :");
	scanf("%d",&value);
	if (value & (0x1<<20))
		printf("ON\n");
	else
		printf("OFF\n");
	return 0;
}
