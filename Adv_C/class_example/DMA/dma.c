#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p;
	p=(int *)malloc(4);
	printf("%ld",sizeof(p));
	printf("%p\n",p);
//     	p=NULL;
	if (p==NULL)
	{
		printf("memory not found");
	}
	else
	{
		*p=11;	
		printf("%d\n",*p);
	}
	return 0;
}
