/* write the calculator program to read two numbers and one character (+, -, *, / , %) from the user, and based on character, do appropriate operation on numbers and print the output. Modify the program to repeat this task n number of times.*/
#include<stdio.h>
int main()
{
int i=1,n,a,b;
char c;
printf("Enter no of elements :");
scanf("%d",&n);
while(i<=n)
{
printf("Enter num1 operator num2 :");
scanf("%d%c%d",&a,&c,&b);
switch(c)
	{
		case '+':printf("Addition of two numbers %d+%d=%d\n",a,b,a+b);
			 break;
		case '-':printf("Subraction of two numbers %d-%d=%d\n",a,b,a-b);
			 break;
		case '*':printf("Multiplication of two numbers %d*%d=%d\n",a,b,a*b);
			 break;
		case '/':printf("Division of two numbers %d/%d=%d\n",a,b,a/b);
			 break;
		case '%':printf("Remainder of two numbers %d%%%d=%d\n",a,b,a%b);
			 break;
		default:printf("Enter valid operator");
	}
	i++;
}
return 0;
}

