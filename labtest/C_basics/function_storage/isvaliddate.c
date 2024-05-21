#include"dates.h"
int IsValidDate(int d,int m,int y)
{
	int x;
	x=IsLeapYear(y);
	int leap=28;
	if (x==1)
	{
		leap=29;
	}
	if(y<1 || m<1 || m>12 || d<1 || d>31 )
	{
		return 0;
	}
	else if(m==2 && d>leap)
	{
		return 0;
	}
	else if((m==4 || m==6 || m==9 || m== 11)&&d>30)
	{
		return 0;
	}
	else 
	{
		return 1;
	}
}
int IsLeapYear(int y)
{
	if ((y%4==0) && (y%100!=0) || (y%400==0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

