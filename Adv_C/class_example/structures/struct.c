#include"header.h"

void printstudentdata(struct student s)
{
	printf("ID:%d\nName:%s\nDOB:%d-%d-%d\nDOJ:%d-%d-%d\n",s.id,s.name,s.d1,s.m1,s.y1,s.d2,s.m2,s.y2);
	if (s.gender=='F')
	{
		printf("Female\n");
	}
	else
		printf("Male\n");
}
int main()
{
	printf("%lu %lu %lu\n",sizeof(struct student),sizeof(s1),sizeof(s2));
	s1.id=11;
	s2.id=28;
	strcpy(s1.name,"chandu");
	s2.name[0]='p';
	s2.name[1]='r';
	s2.name[2]='u';
	s2.name[3]='d';
	s2.name[4]='v';
	s2.name[5]='i';
	s2.name[6]=0;
	s1.d1=7;
	s1.m1=10;
	s1.y1=2000;
	s1.d2=10;
	s1.m2=8;
	s1.y2=2024;

	//printf("Enter student- DOB:");
	//scanf("%d-%d-%d",&s2.d1,&s2.m1,&s2.y1);
	s1.gender='M';
	s2.gender='M';
	printstudentdata(s1);
	printstudentdata(s2);
}

