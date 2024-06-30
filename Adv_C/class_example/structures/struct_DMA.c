#include<stdlib.h>
#include<stdio.h>
typedef struct 
{
	int ID;
	char name[20];
}student;

int main()
{
	student s;
	student *p=(student *)malloc (5*sizeof(student));//Dynamic memory allocation
	if(p==NULL)
	{
		printf("Memory Not assigned\n");
		return 0;
	}
		
	p->ID=11;
	scanf("%s",p->name);
	printf("%d",p->ID);
	printf("%s\n",p->name);
	free(p);
}
