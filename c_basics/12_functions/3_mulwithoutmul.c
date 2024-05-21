/*Write a function that takes two numbers a and b as input arguments and returns their product as return value , without using * operator.*/
#include<stdio.h>
int multiplication(int a,int b)
{
	int sum=0,i;
	for (i=1;i<=b;i++)
	{
		sum+=a;
	}
	return sum;
}
int main()
{
	int num1,num2,mul;
	scan:printf("Enter two positive  numbers :");
	scanf("%d%d",&num1,&num2);
	if (num2<0)
	{
	goto scan;
	}
	mul=multiplication(num1,num2);
	printf("Multiplication of two numbers is:%d\n",mul);
	return 0;
}

