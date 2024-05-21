#include"dates.h"
void PrintDateinFormat(int d,int m,int y)
{
	printf("%d",d);
	PrintSubscript(d);
	PrintMonthName(m);
	printf("%d is elder of all\n",y);
}
void PrintMonthName(int m)
{
	switch(m)
	{
		case 1:printf("Janvary-");break;
		case 2:printf("Feb-");break;
		case 3:printf("March-");break;
		case 4:printf("April-");break;
		case 5:printf("May-");break;
		case 6:printf("June-");break;
		case 7:printf("July-");break;
		case 8:printf("August-");break;
		case 9:printf("September-");break;
		case 10:printf("Octomber-");break;
		case 11:printf("Novomber-");break;
		case 12:printf("December-");
	}
}
void PrintSubscript(int d)
{
	switch(d)
	{
		case 1:
		case 21:
		case 31:printf("st");break;
		case 2:
		case 22:printf("nd");break;
		case 3:
		case 23:printf("rd");break;
		default:printf("th");
	}

}
