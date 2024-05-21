/*
7) int mystrlen( char str[]);
returns the length of the string.
Implementation:
//string length is the count of characters till the first null character is found in a string
int strlen_1(char str[])
{
int i;
for(i=0; str[i] != '\0'; i++); // count all characters till null character is found.
return i;  // return the count.
}
*/
#include<stdio.h>
int mystrlen(char str[]);
int main()
{
	char str[100];
        int cn;
	printf("Enter a string :");
	scanf("%99[^\n]",str);
         cn=mystrlen(str);
	printf("%d",cn);
	return 0;
}
int mystrlen(char str[])
{
        int i;
	for (i=0;str[i]!=0;i++);
	return i;
}
