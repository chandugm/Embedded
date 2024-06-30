//3) create a string dynamically, copy a string constant to it ( "Kernel"). Create another string dynamically. Copy the first string to second string
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char *firststring,*secondstring;
	firststring=(char *)malloc(50*sizeof(char));
	secondstring=(char *)malloc(50*sizeof(char));
	if(firststring == NULL || secondstring ==NULL)
	{
		printf("memory not allocated");
		return 1;
	}
	printf("Enter a string ");
	scanf("%s",firststring);
	strcpy((char *)secondstring,(char *)firststring);
	printf("First_string:%s\n",(char *)firststring);
	printf("Second_string:%s\n",(char *)secondstring);
	free(firststring);
	free(secondstring);
	return 0;
}
