/*Read two numbers from the user, and print all odd numbers between those numbers and then all even numbers.

  eg., inputs: 10   20
output: 
even numbers: 10 12 14 16 18 20
odd numbers: 11 13 15 17 19 
 */
#include<stdio.h>
int main()
{
	int num1,num2,n1,n2;
	printf("Enter two numbers :");
	scanf("%d%d",&num1,&num2);
	printf("Even numbers:");
	n1=num1;
	n2=num2;
	while(num1<=num2)
	{
		if (num1%2==0)
		{
			printf("%d ",num1);
		}
		num1++;
	}
	printf("\nOdd numbers:");
	while(n1<=n2)
	{
		if (n1%2!=0)
		{
			printf("%d ",n1);
		}
		n1++;
	}
	return 0;
}
