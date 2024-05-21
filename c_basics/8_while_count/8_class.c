/*for n students from a class, read 6 subject marks for every student, and calculate their percentage of marks, and print who is the topper of all (print the student number).*/
#include<stdio.h>
int main()
{
	int i=1,n,s1,s2,s3,s4,s5,s6,max=0,st=0;
	float per;
	printf("Enter no .of students :");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("Enter student-%d marks",i);
		scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);
		if (s1>100||s2>100||s3>100||s4>100||s5>100||s6>100)
		{
			printf("Please check entered marks(0>=100)\n");
			return 0;
		}
		else
		{

			per=(float)(s1+s2+s3+s4+s5+s6)/6;
			printf("%.2f\n\n",per);
			per>max?(max=per,st=i):max;
		}
		i++;
	}
	printf("student-%d is topper with percentage of %d",st,max);
	return 0;
}
