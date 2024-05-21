#include<stdio.h>
#include<string.h>
void mystrncat(char d[],char s[],int n);
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
	printf("Enter a number :");
	scanf("%d",&n);
	mystrncat(d,s,n);
}
void mystrncat(char d[],char s[],int n)
{
	int lend =strlen(d);
	for(int i=0;i<n;i++)
	{
		d[lend+i]=s[i];
	}
	printf("%s",d);
}

