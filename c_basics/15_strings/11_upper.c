/*
11) void mystrupr (char str[]);
// convert all lower case alphabets to upper case in the given string
*/
#include<stdio.h>
void mystrlwr(char str[]);
int main()
{
	char str[100];
	printf("Enter a string :");
	scanf("%99[^\n]",str);
	mystrlwr(str);
}
void mystrlwr(char str[])
{
	int cn=0;
	while(str[cn]!=0)
	{
		cn++;
	}
	for (int i=0;i<cn;i++)
	{
		if (str[i] >=97  && str[i]<=122)
		{
			str[i]-=32;
		}
	}
	printf("%s",str);
}

