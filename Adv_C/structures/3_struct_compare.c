//3) Write a function to compare 2 structures and return 1 if they are equal, and 0 if they are not equal.
#include"header.h"
void percentage(int *marks,float *per)
{
	int sum=0;
	for (int i=0;i<6;i++)
	{
		sum += marks[i];
	
	}
	
	*per=(float)sum/6;
}
int compare(struct student s[])
{
if(s[0].ID!=s[1].ID) return 0;
else if(strcmp(s[0].name,s[1].name)) return 0;

else if(s[0].per!=s[1].per) return 0;
for(int i=0;i<6;i++)
{
if (s[0].marks[i] != s[1].marks[i]) return 0;
}
if (s[0].gender != s[1].gender) return 0;
else return 1;
}

int main()
{
struct student s[2];
for(int i=0;i<2;i++)
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

	int result=compare(s);
	if (result==1)
	printf("Both are equal\n");
	else
	printf("Not equal\n");
	return 0;

}

