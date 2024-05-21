//2). Write a program that reads a string as input, and determines whether the string is a palindrome or not.
#include<stdio.h>
int main()
{
	char str[100];
	char pali[100];
	int cn=0,len=0,i=0;
	printf("Enter a string :");
	scanf("%99s",str);
	while(str[i]!=0)
	{
		len++;i++;
	}

	for (int i=0,j=len-1;i<j;i++,j--)
	{
		if (str[i] == str[j])
		{
			cn++;
		}
	}
	if (cn==len/2)
	{
		printf("palindrome");
	}
	else
	{
		printf("Not palindrome");
	}

	
return 0;
}


