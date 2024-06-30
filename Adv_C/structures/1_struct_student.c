/*
1) Practice scanf and printf on each member of the structure using a structure variable using the below structure template:

struct student
{
int ID;
char name[50];
int marks[6];
int d,m,y;
float per;
char gender;
};

create a structure variable of the above type and read ID , name and marks of 6 subjects, date of birth and date of joining using scanf and printf.
Then calculate the percentage of marks, and store the percentage using per pointer member, and print it.Write a function to calculate the percentage ,and update the percentage member of the structure using function (send only per member using call by reference).
 */
#include"header.h"
void percentage(int *marks,float *per)
{
	int sum=0;
	for (int i=0;i<6;i++)
	{
		sum += marks[i];
	
	}
	
	*per=sum/6;
}
void printstudentdata(struct student s)
{
	printf("ID:%d\nName:%s\nDOB:%d-%d-%d\nPercentage:%.2f\n",s.ID,s.name,s.d,s.m,s.y,s.per);
	if (s.gender=='F')
	{
		printf("Female\n");
	}
	else
	{
		printf("Male\n");
	}

}

int main()
{
	struct student s;
	printf("Enter ID :");
	scanf("%d",&s.ID);
	printf("Enter name of the student:");
	scanf(" %49[^\n]",s.name);
	printf("Enter marks of six subjects:\n");
	for(int i=0;i<6;i++)
{
		printf("Enter subject %d marks:",i+1);
	scanf("%d",&s.marks[i]);
}
	printf("Enter DOB:");
	scanf("%d-%d-%d",&s.d,&s.m,&s.y);
	s.gender='M';
	percentage(s.marks,&s.per);
	printstudentdata(s);
	return 0;
}
