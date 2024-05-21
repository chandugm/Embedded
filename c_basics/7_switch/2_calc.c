/*Write the calculator program using switch case statement.*/

#include<stdio.h>
int main(){
	char ch;
	int a,b;
	printf("Enter Two numbers and an operator :");
	scanf("%d%c%d",&a,&ch,&b);
	switch(ch)
	{
		case '+':printf("Addition of two numbers %d+%d=%d",a,b,a+b);
			 break;
		case '-':printf("Subraction of two numbers %d-%d=%d",a,b,a-b);
			 break;
		case '*':printf("Multiplication of two numbers %d*%d=%d",a,b,a*b);
			 break;
		case '/':printf("Division of two numbers %d/%d=%d",a,b,a/b);
			 break;
		case '%':printf("Remainder of two numbers %d%%%d=%d",a,b,a%b);
			 break;
		default:printf("Enter valid operator");
	}
	return 0;
}

