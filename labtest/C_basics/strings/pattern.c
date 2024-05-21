#include<stdio.h>
void pattern(char str[]);
int main()
{
	char str[100];
	printf("Enter a string");
	scanf("%99[^\n]",str);
	pattern(str);
}
void pattern(char str[])
{
	int len=0;
	while(str[len]!='\0')
	{
		len++;
	}

	for (int i=0;i<len/2+1;i++)
	{
		for (int j=0;j<=len/2-i;j++)
		{
			printf(" ");
		}
		for (int k=0;k<=i;k++)
		{
			printf("%c",str[k+i]);
		}
		for (int l=i;l>0;l--)
		{
			printf("%c",str[l+i-1]);
		}
		printf("\n");
	}
	printf("\n");
}
