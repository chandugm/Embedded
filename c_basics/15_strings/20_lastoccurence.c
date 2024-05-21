#include<stdio.h>
#include<string.h>
int mystrchr(char str[],char c);
int main()
{
	char str[100],c;
	printf("Enter a string :");
	scanf("%99[^\n]",str);
	printf("Enter a character :");
	getchar();
	scanf("%c",&c);
	int r=mystrchr(str,c);
	printf("index:%d",r);
}
int mystrchr(char str[],char c)
{
int index=-1;
	int len =strlen(str);
	for (int i=0;i<len;i++)
	{
		if (str[i]==c)
		{
		index=i;
		}
	}
return index;
}

