#include "header.h"

int main()
{


	char d[100];
	char s[100];
	int n;
	printf("Enter destination string :");
	scanf("%99[^\n]",d);
	printf("Enter source string :");
	getchar();
	scanf("%99[^\n]",s);
	char *re=mystrncpy(d,s);
	printf("%s\n",re);
}

char *mystrncpy(char d[],char s[])
{
	int i=0;
	char *dptr=d,*sptr=s;
	while (*(sptr+i) != '\0')
	{
		*(dptr+i)=*(sptr+i);
		i++;
	}
	*(sptr+i)='\0';
	return dptr;
}

