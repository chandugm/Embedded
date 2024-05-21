//1) Write a program to swap two numbers using Call by Value and Call by Reference.
#include<stdio.h>
void swap(int*,int*);
void swapcbv(int,int);
int main()
{
	int a,b;
	printf("Enter a and b values :");
	scanf("%d%d",&a,&b);
	printf("before swap\na=%d\tAddress of a=%p\t b=%d\t Address of b:%p\n",a,&a,b,&b);
	swapcbv(a,b);
	swap(&a,&b);
	printf("Call by reference\na=%d\tAddress of a=%p\t b=%d address of b%p\n",a,&a,b,&b);
	return 0;
}
void swapcbv(int a,int b)
{
a=a+b;
b=a-b;
a=a-b;
printf(" Call by value\na=%d\tb=%d\n",a,b);
}
void swap(int *a,int *b) 
{
        *a=*a+*b;
        *b=*a-*b;
        *a=*a-*b;
}

