#include<stdio.h>
int main()
{
	int y1,m1,d1,y2,m2,d2;
	printf("enter 1st date of birth:");
	scanf("%d-%d-%d",&d1,&m1,&y1);
	printf("enter 2nd date of birth:");
	scanf("%d-%d-%d",&d2,&m2,&y2);
	if(y1==y2)
	{
		if(m1==m2)
		{
			if(d1==d2)
			{
				printf("both are same age");
			}
			else if(d1<d2)
			{
				printf("person born on %d-%d-%d is older",d1,m1,y1);
			}
			else
			{
				printf("person born on %d-%d-%d is older",d2,m2,y2);
			}
		}
		else if(m1<m2)
		{
			printf("person born on %d-%d-%d is older",d1,m1,m1);
		}
		else
		{
			printf("person born on %d-%d-%d is older",d2,m2,y2);
		}
	}
	else if(y1<y2)
	{
		printf("person born on %d-%d-%d is older",d1,m1,y1);
	}
	else
	{
		printf("person born on %d-%d-%d is older",d2,m2,y2);
	}
	return 0;
}




