//1). Take a string as an input, and count the number of words in the string. Take space, comma,exclamation, question mark and fullstop as delimitters for word counting.
#include<stdio.h>

int main()
{
	int i=0,cn=0,word=0;
	char str[100];
	printf("Enter a string :");
	scanf("%99[^\n]",str);
	while(str[i]!='\0')
	{
		
		if (str[i]=='!' || str[i] == ' ' || str [i] == ',' || str [i] == '?' || str[i] == '.')
		{
			if(cn>0)
			{	word++;
				cn=0;
			}

		}
		else
		{
			cn++;
		}
		i++;

	}
	if (cn>0)
	{
		word++;
	}
	printf("No of word are %d ",word);
	return 0;
}
