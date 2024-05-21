/*C program to check whether a character is a vowel or not using switch statement*/

#include<stdio.h>
int main(){
char ch;
printf("Enter a character :");
scanf("%c",&ch);
switch(ch)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
		printf("vowel");
			break;
default:
		printf("Not vowel");
}
return 0;
}

