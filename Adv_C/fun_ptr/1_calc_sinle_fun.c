/*1)Write the calculator program using function pointers for add, sub, mul, div and mod functions, using a single function pointer.*/
#include<stdio.h>
#include<stdlib.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int divs(int,int);
int mod(int,int);
int main()
{
	int x,y;
	char c;
	int (*fun)(int,int);
	printf("Enter two values  i.e a+b:");
	scanf("%d%d",&x,&y);
	fun=add;
	printf("addition:%d\n",fun(x,y));
	fun=sub;
	printf("subtraction:%d\n",fun(x,y));
	fun=mul;
	printf("multiplication:%d\n",fun(x,y));
	fun=divs;
	printf("division:%d\n",fun(x,y));
	fun=mod;
	printf("modulas division:%d\n",fun(x,y));
	return 0;
}
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
int divs(int a,int b)
{
	return a/b;
}
int mod(int a,int b)
{
	return a%b;
}

