/*Write a function that takes two numbers a and b, and returns the quotient after dividing a with b.*/
#include<stdio.h>
float quotient(float a,float b)
{
	return a/b;
}
int main()
{
	float a,b;
	printf("Enter two numbers a and b :");
	scanf("%f%f",&a,&b);
	if (b==0)
	{
		printf("Zero Division Error\n");
	}
	else
	{
		printf("Quotient :%f\n",quotient(a,b));
	}
	return 1;
}
