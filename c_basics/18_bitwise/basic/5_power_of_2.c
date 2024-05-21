//5. WAP whether a number is a power of 2 or not?
#include<stdio.h>

int main()
{
	int a,cn=0;
	printf("Enter a number :");
	scanf("%d",&a);
	for (int i=(sizeof(a)*8)-1;i>=0;i--)
	{
		if(a&(0x1<<i))
			cn++;
	}
	if (cn==1)
		printf("Given number is power of 2\n");
	else
		printf("Given number is not power of 2\n");
return 0;		
}

