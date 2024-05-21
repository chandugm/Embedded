/*"Write a program to find the length of a string. Length is the number of characters in a string (null character is not counted).
eg., char name[10] = ""abc""; //size of name is 10 bytes
             length of name is 3"
*/
#include<stdio.h>
int main()
{
	char str[10];
	printf("Enter a string :");
	scanf("%9[^\n]",str);
	int cn=0;
	while(str[cn]!=0)
		cn++;
	printf("length of name:%d\n",cn);
}

