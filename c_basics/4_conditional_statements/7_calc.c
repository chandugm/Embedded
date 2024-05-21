/*
Write a calculator program that takes two integer numbers from the user, and one of the operands +,-,* and / as a character and prints the appropriate result using if else.
eg1., 
please enter 2 numbers and an operator ( +,-,*,/,%)
input: 3 + 4
output: 3 + 4 = 7

eg2.,
please enter 2 numbers and an operator ( +,-,*,/,%)
input: 3 - 4
output: 3 - 4 = -1*/

#include<stdio.h>
int main()
{
int a,b;
char c;
//printf("Enter the expression given formatt a+b (+,-,*,/,% ) : ");
printf("Enter the expression given format(+,-,*,/,%) a+b :");

scanf("%d%c%d",&a,&c,&b);
if (c == '+')
	printf("%d%c%d = %d ",a,c,b,a+b);
if (c == '-')
	printf("%d%c%d = %d ",a,c,b,a-b);
if (c == '*')
	printf("%d%c%d = %d ",a,c,b,a*b);
if (c == '/')
	printf("%d%c%d = %d ",a,c,b,a/b);
if (c == '%')
	printf("%d%c%d = %d ",a,c,b,a%b);
return 0;
}
