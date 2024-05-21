/*
void mystrcpy ( char d[] . char s[]);
copies all characters from source string (char s[]) to destination string( char d[]) , upto null character ( including null character).
Implementation:
void strcpy_1( char d[], char s[])
{
int i = 0;
while( s[i] != '\0')
{
d[i] = s[i];
i++;
}
d[i] = '\0';
}
*/

#include<stdio.h>
void mystrcpy(char d[],char s[]);
int main()
{
	char d[100];
	char s[100];
	printf("Enter string :");
	scanf("%99[^\n]",d);
	printf("Enter source string :");
	getchar();
	scanf("%99[^\n]",s);
	mystrcpy(d,s);
}
void mystrcpy(char d[],char s[])
{
	int i=0;
	printf("before copy: %s\n",d);
	while (s[i] != '\0')
	{
		d[i]=s[i];
		i++;
	}
	d[i]='\0';
	printf("After copy:%s",d);
}
