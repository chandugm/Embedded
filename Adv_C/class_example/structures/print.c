#include"header.h"
void printstudentdata(struct student *s)
{
	printf("ID:%d\nName:%s\nDOB:%d-%d-%d\nDOJ:%d-%d-%d\n",s[0].id,s[0].name,s[0].d1,s[0].m1,s[0].y1,s[0].d2,s[0].m2,s[0].y2);
	if (s[0].gender=='F')
	{
		printf("Female\n");
	}
	else
		printf("Male\n");
}

