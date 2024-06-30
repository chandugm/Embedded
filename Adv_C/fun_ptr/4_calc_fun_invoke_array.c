/*
   4)
   "Write the calculator program using a function that accepts an array of function pointers and the operand values and operator character as arguments and invokes appropriate function based on the character. In main function, simply invoke this function by sending the array and operator character and operands as input.
   eg.,
   in main
   case '+' :invokeptr( fparr, x,y, ch);


   invokeptr(int (*fptr[]) (int,int) , int x, int y ,char ch)
   {
//based on ch value, choose which index to apply on fptr and invoke the function
}
 */
#include <stdio.h>

// Function prototypes for arithmetic operations
int add(int a, int b) {
	return a + b;
}

int sub(int a, int b) {
	return a - b;
}

int mul(int a, int b) {
	return a * b;
}

int divide(int a, int b) {
	if (b != 0) {
		return a / b;
	} else {
		printf("Error: Division by zero\n");
		return 0;
	}
}
void invokeptr(int (*fptr[]) (int,int) , int x, int y ,char ch)
{
	//based on ch value, choose which index to apply on fptr and invoke the function
	if (ch=='+')
	{
		printf("%d\n", fptr[0](x, y));
	}
	else if (ch=='-')
	{
		printf("%d\n", fptr[1](x, y));
	}
	else if (ch=='*')
	{
		printf("%d\n", fptr[2](x, y));
	}
	else if (ch=='/')
	{
		printf("%d\n", fptr[3](x, y));
	}
}

int main() {
	int x, y;
	char op,ch;


	// Prompt the user for input
	printf("Enter first integer: ");
	scanf("%d", &x);
	printf("Enter an operator (+, -, *, /): ");
	scanf(" %c", &op);
	ch=op;
	printf("Enter second integer: ");
	scanf("%d", &y);
	int  (*fptr[])(int,int)={add,sub,mul,divide};
	// Determine the operation based on the user input
	switch (op) {
		case '+':

			invokeptr(fptr, x, y,ch);
			break;
		case '-':
			invokeptr(fptr, x, y,ch);
			break;
		case '*':
			invokeptr(fptr, x, y,ch);
			break;
		case '/':
			invokeptr(fptr, x, y,ch);
			break;
		default:
			printf("Invalid operator\n");
			return 2;
	}
	return 0;
}

