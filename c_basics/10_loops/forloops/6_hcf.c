/*Find the HCF of 2 given numbers*/
#include<stdio.h>
int main()
{
	int num1,num2,i,gcd,temp;
	printf("Enter two numbers :");
	scanf("%d%d",&num1,&num2);
	if (num1>num2)
	{
		temp=num1;
		num1=num2;
		num2=temp;
	}
	for (i=1;i<=num1;i++)
	{
		if (num1%i==0 && num2%i==0)
		{
	   		gcd=i;
		}
	}
	printf("Highest common factor is %d\n",gcd);
	return 0;
}


