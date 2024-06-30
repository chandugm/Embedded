//2)Rewrite the calculator program using an array of function pointers.
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
	int (*fun[5])(int,int)={add,sub,mul,divs,mod};
	printf("Enter two integer numbers :");
	scanf("%d%d",&x,&y);

	char *operation[]={"Add","subtract","multiplication","division","modulas"};
	for(int i=0;i<5;i++)
{
	printf("%s:%d\n",operation[i],(*fun[i])(x,y));

}
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

