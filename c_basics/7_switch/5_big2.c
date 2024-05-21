/*C program to find biggest of two numbers using switch statement*/
#include<stdio.h>
int main()
{
int a,b,c,d;
printf("Enter two numbers :");
scanf("%d%d",&a,&b);
switch (c=a>b)
{
case 0:
	printf("b is bigger");
	break;
case 1:
	printf("a is bigger");
	break;
default:printf("Both are same");
}
return 0;
}
