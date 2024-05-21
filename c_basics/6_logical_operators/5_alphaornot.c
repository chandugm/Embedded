/* Read a character and print if it is alphabet or not.*/
#include<stdio.h>
int main(){
	char ch;
	printf("Enter a character :");
	scanf("%c",&ch);
	if(ch>=97 && ch<=122)
		printf("Alphabet\n");
	else if (ch>=65 && ch<=90)
		printf("Alphabet\n");
	else
		printf("Not Alphabet\n");
}

