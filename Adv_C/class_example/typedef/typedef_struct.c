#include<stdio.h>
typedef struct student //key
{
	int ID;
	char gender;
}s;
int main()
{
	//student s1 ***invalid use of typedef *unknown type name ‘student’; use ‘struct’ keyword to refer to the type** 
	s s1;
	typedef struct student school;
	//typedef struct register student school; ****error: multiple storage classes in declaration specifiers*******
	return 0;
}
