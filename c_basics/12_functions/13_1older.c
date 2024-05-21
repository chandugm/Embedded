// Write a function that takes 2 dates as inputs, and returns 1 if the first date is old, 2 if the second date is old.
#include<stdio.h>
int valid_date(int d,int m,int y)
{
	int leap=28;
	if (y%4==0&&y%100!=0||y%400==0)
	{
		leap=29;
	}
	if(y<1 || m<1 || m>12 || d<1 || d>31)
		return 0;
	else if (m==2 && (d<1 || d>leap))
		return 0;
	else if ((m ==4 || m==6 || m== 9 || m== 11) && (d>30))
		return 0;
	else
	{
		return 1;
	}
}

int older(int d1,int m1,int y1,int d2,int m2,int y2)
{
	if (valid_date(d1,m1,y1)==1 && valid_date(d2,m2,y2)==1){
		if (y1<y2 || (y1==y2 && (m1<m2 ||(m1==m2 && (d1<d2)))))
			return 1;
		if (y1==y2 && m1==m2 && y1==y2)
			return 0;
		else
			return 2;
	}
	else
		return 0;
}
int main()
{
	int d1,d2,m1,m2,y1,y2,old;
scan:	printf("Enter first  dd-mm-yyyy :");
	scanf("%d-%d-%d",&d1,&m1,&y1);
	printf("Enter second dd-mm-yyyy :");
	scanf("%d-%d-%d",&d2,&m2,&y2);
	/*	while ((y1<1 || y2<1 || d1<1 || d2<1 || d1>31 || d2>31 || m1<1 || m1 >12 || m2<1 || m2>12) || (y1==y2 && m1==m2 && d1==d2))
		{

		printf("invalid data or  Both ages are same\n");
		printf("Enter first  dd-mm-yyyy :");
		scanf("%d-%d-%d",&d1,&m1,&y1);
		printf("Enter second dd-mm-yyyy :");
		scanf("%d-%d-%d",&d2,&m2,&y2);
		}*/
	old=older(d1,m1,y1,d2,m2,y2);
	if (old==1)
	{
		printf("First is old\n");
	}
	else if(old==2)
	{
		printf("Second os old\n");
	}
	else if(old==0)
	{
		printf("invalid date or Both DOB are same\n");
		goto scan;
	}
	return 0;
}

