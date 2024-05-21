//Write a  function that takes a date as input, and returns 1 if the date is valid, 0 if the date is invalid.
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
int main()
{
	int date,month,year,vd;
	printf("Enter dd-mm-yyyy :");
	scanf("%d-%d-%d",&date,&month,&year);
	vd=valid_date(date,month,year);
	if(vd==1)
	{
		printf("valid date\n");
	}
	else
	{
		printf("Invalid date\n");
	}
	return 0;
}

