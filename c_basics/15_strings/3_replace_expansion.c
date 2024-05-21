/*
3). Write a program to replace a given character by another character in a string.
" WAP to display the word expansion of a number
eg., Input : 789
Output : Seven Eight Nine"
*/

#include<stdio.h>
void char_replace(char str[],char old,char new);
void expansion(char str1[]);
int main()
{
	char str[100],old,new,str1[100];
	printf("Enter a string :");
	scanf("%99[^\n]",str);
	printf("Enter old char ");
	scanf(" %c",&old);
	printf("Enter new char:");
	scanf(" %c",&new);
	char_replace(str,old,new);
	printf("\nEnter a number :");
	getchar();
	scanf("%99[^\n]",str1);
	expansion(str1);
	return 0;
}
void char_replace(char str[],char old,char new)
{
	int cn=0;
	while(str[cn]!=0)
	{
		cn++;
	}
	for(int i=0;i<cn;i++)
	{
		if (str[i]==old)
		{
			str[i]=new;
		}
	}
	printf("%s",str);
}
void expansion(char str1[])
{
	int cn=0;
	while (str1[cn]!=0)
	{
		cn++;
	}
	for (int i=0;i<cn;i++)
	{
		char a=str1[i];
			switch(a)
			{
				case '0':printf("zero ");break;
				case '1':printf("one ");break;
				case '2':printf("two ");break;
				case '3':printf("three ");break;
				case '4':printf("four ");break;
				case '5':printf("five ");break;
				case '6':printf("six ");break;
				case '7':printf("seven ");break;
				case '8':printf("eight ");break;
				case '9':printf("nine ");break;
			}
	}
}
