/*
"Write a program to convert a string into lower case and print.
eg., input : HELLO
output : hello"
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
			str[i]+=32;
		}
	}
	printf("%s",str);
}

