/*
9) implement a function to receive a sentence as input, and return the string with the words reversed,
eg., input: Kernel Masters is best for embedded systems.
output: systems embedded for best is Masters Kernel.
*/
#include<stdio.h>
#include<string.h>
void myswap(char *s1,char *s2)
{
	char temp=*s1;
	*s1=*s2;
	*s2=temp;
}

void reverse(char *str,int start,int end)
{

	for(int i=start,j=end-1;i<j;i++,j--)
	{
		myswap(&str[i],&str[j]);
	}

}


#include<stdio.h>
int main()
{
	char str[100];
	printf("Enter a string:\n");
	scanf(" %99[^\n]",str);

	int len=strlen(str),start=0;
	int end=len;
	reverse(str,start,end);
	end=0;
	for(int i=0;i<=len;i++)
	{

		if(str[i] ==' ' || str[i]=='\0')
		{
			end=i;
			reverse(str,start,end);
			start=i+1;
		}

	}
	printf("%s",str);
	return 0;
}

