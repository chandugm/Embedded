#include "header.h"

int main()
{
	int len;
	char str[100];
	printf("Enter a string :");
	scanf("%99[^\n]",str);
	len=mystrlen(str);
	printf("length of string :%d",len);
	return 0;
}
