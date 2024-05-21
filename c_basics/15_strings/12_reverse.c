/*
12) void mystrrev( char str[]);
//reverse the string (without using any extra array)

eg., input : str[] = "Kernel";
output : str[] = "lenreK"
*/

#include<stdio.h>
#include<string.h>
void mystrrev(char str[]);
int main()
{
	char str[100];
	printf("Enter a string :");
	scanf("%99[^\n]",str);
	mystrrev(str);
	return 0;
}
void mystrrev(char str[])
{
	int len =strlen(str);
	for (int i=0,j=len-1;i<len/2;i++,j--)
	{
		str[i]=str[i]+str[j];
		str[j]=str[i]-str[j];
		str[i]-=str[j];
	}
	printf("%s\n",str);
}
