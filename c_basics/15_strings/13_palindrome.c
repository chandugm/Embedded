/*
13) int mypalindrome (char str[])
// return 1 if the given string is a palindrome, return 0 if it is not a palindrome
*/
#include<stdio.h>
int mypalindrome(char str[]);
void upper(char str[]);
int main()
{
	char str[100];
	char pali[100];
	printf("Enter a string :");
	scanf("%99s",str);
	lower(str);
	int r=mypalindrome(str);
	if (r==1)printf("palindrome\n");
	else if(r==0)printf("Not palindrome\n");
}
void lower(char str[])
{
int i=0;
while (str[i]!=0)
{
	if(str[i]>='A' && str[i]<='Z')
	{
		str[i]+=32;
	}
	else
	{
		str[i]=str[i];
	}
	i++;
}
}
int mypalindrome(char str[])
{

	int cn=0,len=0;
	while(str[len]!=0)
	{
		len++;
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
		return 1;
	}
	else
	{
		return 0;
	}

	

}

