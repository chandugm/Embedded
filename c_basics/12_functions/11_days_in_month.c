//Write a function to accept a month and year as input, and return the number of days in that month as output. print the number of days in main.
#include<stdio.h>
int days_in_month(int m,int y)
{
	int days_in_feb=28,days;
	if (y%4==0 && y%100!=0 || y%400==0)
	{
		days_in_feb=29;
	}
	if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
	{
		days=31;
	}
	else if (m==4 || m==6 || m==9 || m==11)
	{
		days =30;
	}
	else
	{
		days=days_in_feb;
	}
	return days;
}
int main()
{
	int month,year,days;
scan:printf("Enter month and year :");
     scanf("%d%d",&month,&year);
     if ((month>12 )||(month<1)||(year<1))
     {
	     printf("Invalid Data\n");
	     goto scan;
     }
     else
     {
	     days=days_in_month(month,year);
	     printf("Days in  month%d year%d :%d\n",month,year,days);
     }
     return 0;
}
