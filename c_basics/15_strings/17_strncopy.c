#include<stdio.h>
void mystrncpy(char d[],char s[],int n);
int main()
{


	char d[100];
	char s[100];
	int n;
	printf("Enter string :");
	scanf("%99[^\n]",d);
	printf("Enter source string :");
	getchar();
	scanf("%99[^\n]",s);
	printf("Enter a number :");
	scanf("%d",&n);
	mystrncpy(d,s,n);
}

void mystrncpy(char d[],char s[],int n)
{
	int i=0;
	printf("before copy: %s\n",d);
	while (i<n)
	{
		d[i]=s[i];
		i++;
	}
	d[i]='\0';
	printf("After copy:%s",d);
}

