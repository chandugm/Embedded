/*
9) void mystrcat( char d[] , char s[]);

concatenates the content from source string to the end of destination string ( copy paste characters from s to  d , from null character index in d )
eg., char d[] = "Kernel";
char s[] = "Masters";
output: after concatenation d[] becomes " KernelMasters"
*/

#include<stdio.h>
#include<string.h>
void mystrcat(char d[],char s[]);
int main()
{
	char d[100];
	char s[100];
	printf("Enter string-1 :");
	scanf("%99[^\n]",d);
	printf("Enter string-2 :");
	getchar();
	scanf("%99[^\n]",s);
	mystrcat(d,s);
}
void mystrcat(char d[],char s[])
{
	int lend =strlen(d);
	int lens =strlen(s);
	for(int i=0;i<lens;i++)
	{
		d[lend+i]=s[i];
	}
	printf("%s",d);
}


