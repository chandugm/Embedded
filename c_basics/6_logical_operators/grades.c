/*Find the % of marks for 6 subjects (read 6 subject marks and calculate percentage), for a student, and print the grade of the student as per below division , using if else statement and typecasting operator to get perfect floating point percentage.
  80 - 100        : Honours
  60 - 79         : First Division
  50 - 59         : Second Division
  40 - 49         : Third Division
  0 - 39          : Fail */

#include<stdio.h>
int main(){
	int s1,s2,s3,s4,s5,s6;
	float percentage;
	printf("six subjects marks of a student :");
	scanf("%d%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5,&s6);
	if (s1>100||s2>100||s3>100||s4>100||s5>100||s6>100){
		printf("Please check entered marks(0>=100)\n");
		return 0;}
	else if(s1<35||s2<35||s3<35||s4<35||s5<35||s6<35)
	{
		printf("fail\n");
	}
	else{
		percentage=(float)(s1+s2+s3+s4+s5+s6)/600*100;
		if (percentage>=80 && percentage<=100)
			printf("Honours\n");
		else if (percentage>=60 && percentage<=79)
			printf("First Division\n");
		else if (percentage>=50 && percentage<=59)
			printf("Second Division\n");
		else if (percentage>=40 && percentage<=49)
			printf("Third Division\n");
		else if (percentage>=0 && percentage<=39)
			printf("Fail"\n);
	}
	return 0;
}


