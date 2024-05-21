/*Write a program to multiply two numbers without using * operator,*/
#include<stdio.h>
int main()
{
	int i=1,sum=0,num1,num2,n;
	printf("Enter two numbers to perform multiplication :");
	scanf("%d%d",&num1,&num2);
	while(i<=num2)
	{
		sum+=num1;
		i++;
	}
	printf("multiplication of %d*%d=%d\n",num1,num2,sum);
	return 0;
}

