/*
"Write a program to convert a string into upper case and print.
eg., input : Hello
output : HELLO"
*/
#include<stdio.h>
int main()
{
	char str[100];
	printf("Enter a string :");
	scanf("%99[^\n]",str);
	int cn=0;
	while(str[cn]!=0)
	{
		cn++;
	}
	for (int i=0;i<cn;i++)
	{
		if (str[i] >=65  && str[i]<=90)
		{
			str[i]=str[i];
		}
		else
		{
			str[i]-=32;
		}
	}
	printf("%s",str);
}

