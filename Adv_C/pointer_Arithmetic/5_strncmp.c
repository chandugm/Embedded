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
	char *s1ptr=s1,*s2ptr=s2;	
	for (i=0;i<=n ;i++)
	{

		if (*(s1ptr+i)-*(s2ptr+i)==0)
			continue;
		else
			return *(s1ptr+i)-*(s2ptr+i);

	}
	return 0;
}


