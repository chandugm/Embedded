/*
Write a function to determine if a character is alphanumeric or not and print the appropriate output in main function. (return 1 if it is alphanumeric, 0 if it is not alpha numeric).
Hint: int fun_alpha_num(char c).
*/
#include<stdio.h>
int fun_alpha_num(char c)
{
	int a;
	a=(c>=97&&c<=122)||(c>=65&&c<=90)||(c>=48&&c<=57)? 1: 0;
	return a;
}
int main()
{
	char c;
	int alphan;
	printf("Enter a character :");
	scanf("%c",&c);
	alphan=fun_alpha_num(c);
	if (alphan==1)
	{
		printf("Alphanumaric\n");
	}
	else
	{
		printf("Not Alphanumaric\n");
	}
	return 0;
}
