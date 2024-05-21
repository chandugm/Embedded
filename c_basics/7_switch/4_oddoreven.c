/*C program to check whether a number is odd or even using switch statement*/
#include<stdio.h>
int main()
{
int a,b,d;
printf("Enter a number :");
scanf("%d",&a);
b=a%2==0;
switch (b)
{
case 1:printf("Even");
	break;
case 0:printf("Odd");
}
return 0;
}

