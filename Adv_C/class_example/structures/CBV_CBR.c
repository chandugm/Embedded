#include<stdio.h>
#include<string.h>
struct student 
{
	int ID;
	char name[10];
	int per;
}stu;
void printdatacbv(struct student s)
{
	printf("ID=%d\nname=%s\npercentage=%d\n",s.ID,s.name,s.per);
	s.ID=22;
}
void printdatacbr(struct student *s)
{
	printf("ID=%d\nname=%s\npercentage=%d\n",s->ID,s->name,s->per);
	s->ID=22;
}
int main()
{
	stu.ID=11;
	strcpy(stu.name,"chandu");
	stu.per=95;
	printdatacbv(stu);
	printf("cbvID=%d\n",stu.ID);
	printdatacbr(&stu);
	printf("cbrID=%d\n",stu.ID);
	return 0;
}
