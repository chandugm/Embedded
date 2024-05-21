/*Modify the Calculator Program to take input and perform the chosen operation. If the user chooses one of the operations, +,-,*,/ and % then show the output and continue for next iteration.
  If the user chooses wrong operation, then stop the loop.
 */
#include<stdio.h>
int main()
{
	int a,b,n;
	char c;
	printf("Enter no of iterations :");
	scanf("%d",&n);
	printf("Enter the expression given formatt a+b : ");
//	scanf("%d%c%d",&a,&c,&b);
	do{
		scanf("%d%c%d",&a,&c,&b);
		if (c == '+')
			printf("%d%c%d = %d ",a,c,b,a+b);
		else if (c == '-')
			printf("%d%c%d = %d ",a,c,b,a-b);
		else if (c == '*')
			printf("%d%c%d = %d ",a,c,b,a*b);
		else if (c == '/')
			printf("%d%c%d = %d ",a,c,b,a/b);
		else if (c == '%')
			printf("%d%c%d = %d ",a,c,b,a%b);
		else
			printf("Invalid operator");
			n=0;
		n--;	
	}

	while(n>0);
	return 0;
}

