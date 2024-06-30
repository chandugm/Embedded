/*
11) char *mystrlwr (char str[]);
// convert all upper case alphabets to lower case in the given string
*/
#include<stdio.h>
char *mystrlwr(char str[]);
int main()
{
	char str[100];
	printf("Enter a string :");
	scanf("%99[^\n]",str);
	char *rev=mystrlwr(str);
	printf("%s\n",rev);
}
char *mystrlwr(char s[])
{
	int cn=0;
	while(s[cn]!=0)
	{
		cn++;
	}
	for (int i=0;i<cn;i++)
	{
		if (*(s+i) >=65  && *(s+i)<=90)
		{
			*(s+i)+=32;
		}
	}
	return s;
}

