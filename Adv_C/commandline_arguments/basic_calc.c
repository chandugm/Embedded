/*
   Implement the calculator program using Command line arguments

eg., input:  >./calc   56 + 671
output : 727

note: when giving * in commandline, always give "*"
*/
#include<stdio.h>
#include<stdlib.h>
int myatoi(char *s)
{int rem=0,sum=0;
	for(int i=0;s[i]!='\0';i++)
	{
		rem=rem*10+s[i]-'0';
		
	}
	return rem;
}
int main(int argc,char *argv[])
{
int a=myatoi(argv[1]);
//	int a=atoi(argv[1]);
	int b=atoi(argv[3]);
	if(*argv[2]=='+')
		printf("%d+%d=%d",a,b,a+b);
	else if(*argv[2]=='-')
		printf("%d-%d=%d",a,b,a-b);
	else if(*argv[2]=='*')//when giving * in commandline, always give "*"
		printf("%d*%d=%d",a,b,a*b);
	else if(*argv[2]=='/')
		printf("%d/%d=%d",a,b,a/b);
	return 0;

}
