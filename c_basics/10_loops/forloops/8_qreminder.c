/*Write a program to find the quotient and reminder of two given numbers upon division, without using / and % operators considering negative and positive operands.

Hint: Division is continuous subtraction until the reminder is smaller than the devisor.*/
#include<stdio.h>
int main()
{
	int num1,num2,rem,quot=0,i;
	printf("Enter two numbers :");
	scanf("%d%d",&num1,&num2);
	if (num2==0)
	{
		printf("Zero division error\n");
	}
	else{
		for (; num1 >= num2;) 
		{
			num1 -= num2;
			quot++;
		}
		printf("quotient=%d remainder=%d",quot,num1);
	}
	return 0;
}
