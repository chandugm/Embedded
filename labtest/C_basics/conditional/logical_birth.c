/*The below program is implemented in 4 different versions and uploaded separate source files into the lab test folder.
 1) if else with nested statements 2) if else without nested statements 3) conditional operator 4) Logical Operators.
Read the dates of births of two candidate’s user (day, month & year) into 3 different variables each, and print which date the person born is the older of the two and print if both ages are the same.*/
#include<stdio.h>
int main()
{
	int y1,m1,d1,y2,m2,d2;
	printf("enter 1st date of birth:");
	scanf("%d-%d-%d",&d1,&m1,&y1);
	printf("enter 2nd date of birth:");
	scanf("%d-%d-%d",&d2,&m2,&y2);
	if(y1==y2 && m1==m2 && d1==d2)
		printf("Both are same age");
	else if (y1<y2 || (y1==y2 && (m1<m2 ||(m1==m2 && (d1>d2)))))
		printf("person born on %d-%d-%d is older",d1,m1,y1);
	else
               printf("person born on %d-%d-%d is older",d2,m2,y2);
	return 0;
}
