#include<stdio.h>
int mystricmp(char s1[],char s2[]);
int main()
{
	char s1[100],s2[100];
	printf("Enter a string-1 :");
	scanf("%99[^\n]",s1);
	getchar();
	printf("Enter string-2 :");
	scanf("%99[^\n]",s2);
	int i=mystricmp(s1,s2);
	if (i<0) printf("string-2 is bigger\n");
	else if(i>0) printf("string-1 is bigger\n");
	else printf("both strings are equal\n");
	return 0;
}
int mystricmp(char s1[],char s2[])
{

	for (int i=0;s1[i]!=0 || s2[i]!=0;i++)
	{
		char str1[100],str2[100];		
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
}

