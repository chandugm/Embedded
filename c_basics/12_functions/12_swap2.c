//Write a function ,that can take two integers, swap their values and print their new values. return type should be void. function should print the values.
#include<stdio.h>
void swap(int a,int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d b=%d\n",a,b);
}
int main()
{
	int a,b;
	printf("Enter two numbers :");
	scanf("%d%d",&a,&b);
	swap(a,b);
	return 0;
}
