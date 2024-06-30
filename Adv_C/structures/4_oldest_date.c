/*
4) write a function to take the array of structures as arguments and return the structure element with the oldest date of birth.
    return the structure variable using return statement and array element with index. Return type of the function will be struct student.

    eg.,
    struct student oldest student(struct student arr[])
    { 

    return arr[i]; // find the index at which date of  birth is oldest using date comparison function
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

struct student oldest_student(struct student arr[])
{
	/*if(y1==y2 && m1==m2 && d1==d2)

	  else if (y1<y2 || (y1==y2 && (m1<m2 ||(m1==m2 && (d1>d2)))))

	 */
	int index=0;

	for(int i=1;i<n;i++)
	{
		if(arr[i].y==arr[index].y &&arr[i].m== arr[index].m &&arr[i].d==arr[index].d )
			continue;
		else  if (arr[i].y<arr[index].y || (arr[i].y==arr[index].y &&(arr[i].m<arr[index].m||(arr[i].m==arr[index].m&&(arr[i].d>arr[index].d)))))
		{
			index=i;
		}
			
	}
	return arr[index];
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
	struct student oldest=oldest_student(s);
	printf("\nOldest student DOB: %02d-%02d-%04d\n", oldest.d, oldest.m, oldest.y);
	printstudentdata(oldest);
	return 0;

}


