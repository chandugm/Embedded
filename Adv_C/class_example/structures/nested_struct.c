#include"header.h"

void printstudentdata(struct student s)
{
	printf("ID:%d\nName:%s\nDOB:%d-%d-%d\nDOJ:%d-%d-%d\n",s.id,s.name,s.dob.d1,s.dob.m1,s.dob.y1,s.doj.d2,s.doj.m2,s.doj.y2);
	if (s.gender=='F')
	{
		printf("Female\n");
	}
	else
		printf("Male\n");
struct date mm;
}
int main()
{
//	printf("%lu %lu %lu\n",sizeof(struct student),sizeof(s1),sizeof(s2));
	s1.id=11;
	s2.id=22;
	strcpy(s1.name,"chandu");
	s2.name[0]='p';
	s2.name[1]='r';
	s2.name[2]='u';
	s2.name[3]='d';
	s2.name[4]='v';
	s2.name[5]='i';
	s2.name[6]=0;
	s1.dob.d1=7;
	s1.dob.m1=10;
	s1.dob.y1=2000;

	s1.doj.d2=10;
	s1.doj.m2=8;
	s1.doj.y2=2024;
	s2.doj.d2=10;
	s2.doj.m2=8;
	s2.doj.y2=2024;

	printf("Enter student- DOB:");
	scanf("%d-%d-%d",&s2.dob.d1,&s2.dob.m1,&s2.dob.y1);
	s1.gender='M';
	s2.gender='M';
	printstudentdata(s1);
	printstudentdata(s2);
}

