#include "header.h"
int main()
{
	char str[100];
	printf("Enter a string :");
	scanf("%99[^\n]",str);
	char *rev=mystrrev(str);
	printf("%s",rev);
	return 0;
}
char *mystrrev(char str[])
{
	int len =mystrlen(str);
	char *ptr=str;
	for (int i=0,j=len-1;i<len/2;i++,j--)
	{
		*(ptr+i)=*(ptr+i)+*(ptr+j);
		*(ptr+j)=*(ptr+i)-*(ptr+j);
		*(ptr+i)-=*(ptr+j);
	}
	return ptr;
}
