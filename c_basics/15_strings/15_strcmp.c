#include<stdio.h>
int mystrcmp(char s1[],char s2[]);
int main()
{
	char s1[100],s2[100];
	int i;
	printf("Enter a string-1 :");
	scanf("%99[^\n]s",s1);
	getchar();
	printf("Enter string-2 :");
	scanf("%99[^\n]s",s2);
	i=mystrcmp(s1,s2);
	if (i<0) printf("string-2 is bigger\n");
	else if(i>0) printf("string-1 is bigger\n");
	else printf("both strings are equal\n");
	return 0;
}
int mystrcmp(char s1[],char s2[])
{
int i=0;
	for (i=0;s1[i]!=0 || s2[i]!=0;i++)
	{
		if (s1[i]-s2[i]==0)
			continue;
		else
			return s1[i]-s2[i];
	}
}
