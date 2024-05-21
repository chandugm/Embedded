/*Write a function that takes two numbers a and b, and returns the remainder  after dividing a with b.*/
#include<stdio.h>
int quotient(int a,int b)
{
	return a%b;
}
int main()
{
	int a,b;
	printf("Enter two numbers a and b :");
	scanf("%d%d",&a,&b);
	if (b==0)
	{
		printf("Zero Division Error\n");
	}
	else
	{
		printf("Remainder :%d",quotient(a,b));
	}
	return 1;
}
