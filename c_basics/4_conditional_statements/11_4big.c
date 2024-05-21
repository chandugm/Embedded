/* Write a program to read 4 numbers and print the biggest of them*/
#include<stdio.h>
int main()
{
int a,b,c,d;
printf("Enter 4 numbers : ");
scanf("%d%d%d%d",&a,&b,&c,&d);
if (b>a)
	a=b;
if (c>a)
	a=c;
if (d>a)
	a=d;
printf("%d",a);
return 0;
}

