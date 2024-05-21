/*Write a function that takes two numbers, a and n as input arguments and returns the value of a to the power of n.*/
#include<stdio.h>
int multiply(int a,int b)
{
	int i,j,temp=a,power;
	for (i=1;i<b;i++){
		power=0;
		for (j=1;j<=temp;j++)
		{
			power+=a;

		}
		a=power;
	}
	return a;
}
int power(int a,int b)
{
	int power;
	power=multiply(a,b);
	return power;
}
int main()
{
	int n1,n2,p;
	printf("Enter two numbers :");
	scanf("%d%d",&n1,&n2);
	if (n2==0)
	{
	printf("1\n");
	}
	else
	{
	p=power(n1,n2);
	printf("%d\n",p);
	}
	return 0;
}
