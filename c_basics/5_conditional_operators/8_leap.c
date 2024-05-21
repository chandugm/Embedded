/*check if an year is leap year or not.*/
#include<stdio.h>
int main()
{
int year;
printf("Enter a year : ");
scanf("%d",&year);
(year%100!=0)?(year%4==0)?printf("leap year"):printf("not leap year"):year%400==0?printf("leap year"):printf("not leap year");
return 0;
}
