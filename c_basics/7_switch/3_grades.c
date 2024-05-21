/* Extend the percentage marks program to print the grade of the student as per below division , using switch statements.
80 - 100        : Honours
60 - 79         : First Division
50 - 59         : Second Division
40 - 49         : Third Division
0 - 39          : Fail*/
#include<stdio.h>
int main()
{
int s1,s2,s3,s4,s5,s6;
int  percentage;
printf("Enter six subjects marks");
scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);
percentage=(float)(s1+s2+s3+s4+s5+s6)/6;
switch (percentage)
{
case 80 ... 100:
	printf("honours");
	break;
case 60 ... 79 :
	printf("First division");
	break;
case 50 ... 59:
	printf("Second division");
	break;
case 49 ... 49:
	printf("Third division");
	break;
case 0 ... 39:printf("Fail");
	break;
default:printf("Fail");
}
return 0;
}

