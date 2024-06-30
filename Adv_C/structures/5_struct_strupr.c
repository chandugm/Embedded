//5) Write a function to take an array of structures as arguments, and convert all their names into capital letters( strupr implementation). print the data in the main function.

#include"header.h"
struct student upper(struct student s[])
{
for (int i=0;i<n;i++)
{
for (int j=0;j<s[i].name[j]!='\0';j++)
	{
		if (s[i].name[j] >=65  && s[i].name[j]<=90)
		{
			s[i].name[j]=s[i].name[j];
		}
		else
		{
			s[i].name[j]-=32;
		}
	}

}
}
void percentage(int *marks,float *per)
{
	int sum=0;
	for (int i=0;i<6;i++)
	{
		sum += marks[i];
	
	}
	
	*per=(float)sum/6;
}
void printstudentdata(struct student s[])
{
	float top=0;
	int id;
	for(int i=0;i<n;i++)
	{
		printf("ID:%d\nName:%s\nDOB:%d-%d-%d\nPercentage:%.2f\n",s[i].ID,s[i].name,s[i].d,s[i].m,s[i].y,s[i].per);
		if (s[i].gender=='F')
		{
			printf("Female\n");
		}
		else
		{
			printf("Male\n");
		}
		if(s[i].per>top)
		{
			top=s[i].per;
			id=i;
		}
		else
			top=top;
	}
	printf("Topper of the class student ID:%d Name :%s with percentage :%.2f ",s[id].ID,s[id].name,top);
}

int main()
{
	printf("Enter no.of students:\n");
	scanf("%d",&n);
	struct student s[n];
	for(int i=0;i<n;i++)
	{
		printf("Enter student %d ID :",i+1);
		scanf("%d",&s[i].ID);
		printf("Enter name of the student %d:",i+1);
		scanf(" %49[^\n]",s[i].name);
		printf("Enter marks of the student %d six subjects\n",i+1);
		for(int j=0;j<6;j++)
		{
			printf("Enter student %d subject %d marks:",i+1,j+1);
			scanf("%d",&s[i].marks[j]);
		}
		printf("Enter Student-%d DOB:",i+1);
		scanf("%d-%d-%d",&s[i].d,&s[i].m,&s[i].y);
		printf("Enter Student-%d Gender[M/F]",i+1);
		scanf(" %c",&s[i].gender);
		percentage(s[i].marks,&s[i].per);
	}
	upper(s);
	printstudentdata(s);
	return 0;

}

