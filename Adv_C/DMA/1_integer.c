//create an integer dynamically ,read and print its value.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	p= malloc(sizeof(int));
	if (p==NULL)
	{
		printf("Memory allocation failed\n");
		return 1;
	}
	printf("Enter a number\n");
	scanf("%d",p);
	printf("%d",*p);
	free(p);
	return 0;
}
