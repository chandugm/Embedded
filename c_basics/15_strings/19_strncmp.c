#include<stdio.h>
int mystrncmp(char s1[],char s2[],int n);
int main()
{
	char s1[100],s2[100];
	int n;
	printf("Enter a string-1 :");
	scanf("%99[^\n]",s1);
	getchar();
	printf("Enter string-2 :");
	scanf("%99[^\n]",s2);
	printf("Enter a number :");
	scanf("%d",&n);	
	int i=mystrncmp(s1,s2,n);
	if (i<0) printf("string-2 is bigger\n");
	else if(i>0) printf("string-1 is bigger\n");
	else printf("both strings are equal\n");
	return 0;
}
int mystrncmp(char s1[],char s2[],int n)
{
int i=0;
		char str1[100],str2[100];	
	for (i=0;i<=n ;i++)
	{

	
		if(s1[i] >=65 && s1[i] <=90)
			str1[i]=s1[i]+32;

		else str1[i]=s1[i];

		if(s2[i] >=65 && s2[i] <=90)
			str2[i]=s2[i]+32;

		else str2[i]=s2[i];

		if (str1[i]-str2[i]==0)
			continue;
		else
			return str1[i]-str2[i];

	}
	return 0;
}


