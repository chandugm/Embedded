//create a string dynamically, read and print its value.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *c;
	c=(char *)malloc(20*sizeof(char));
	if (c==NULL)
	{
		printf("Memory allocation failed\n");
		return 1;
	}
	printf("Enter a string :\n");
	scanf("%19[^\n]s",c);
	printf("%s",c);
	free(c);
	return 0;
}
