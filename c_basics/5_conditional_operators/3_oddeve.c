/*Write a program that determines whether a given integer is odd or even and displays the appropriate message*/

#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number :");
	scanf("%d",&a);
	a%2==0?printf("Even"):printf("Odd");
	return 0;
}
