//3 Write a program to take input for two character variables using pointers and find out which character has higher ascii value.
#include<stdio.h>
int main()
{
	char c1,c2;
	char *c1ptr=&c1;
	char *c2ptr=&c2;
	printf("Enter two characters ");
	scanf("%c %c",c1ptr,c2ptr);
	if(*c1ptr > *c2ptr)
		printf("First char ascii value bigger\n");
	else
		printf("second char ascii value bigger\n");
	return 0;
}
