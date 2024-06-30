#include<stdio.h>
#include<string.h>
char *mystrncat(char d[],char s[]);
int main()
{
	char d[100];
	char s[100];
	int n;
	printf("Enter string-1 :");
	scanf("%99[^\n]",d);
	printf("Enter string-2 :");
	getchar();
	scanf("%99[^\n]",s);
	char *rev=mystrncat(d,s);
	printf("%s\n",rev);
}
char *mystrncat(char d[],char s[])
{
	int lend =strlen(d);
	for(int i=0;*(s+i)!=0;i++)
	{
		*(d+(lend+i))=*(s+i);
	}
	return d;
}

