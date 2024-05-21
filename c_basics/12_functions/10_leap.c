/*Write a function to accept a year as input and return 1 if the year is a leap year, otherwise 0.*/
#include<stdio.h>
int leap(int year)
{
	if (year%4==0 && year%100!=0 || year%400==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int y,l;
	printf("Enter a year :");
	scanf("%d",&y);
	l=leap(y);
	if (l==1)
	{
		printf("Leap year\n");
	}
	else
	{
		printf("Not leap year\n");
	}
	return 0;
}
