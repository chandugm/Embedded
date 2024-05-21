/*Write a program to print all odd numbers and even numbers between two given numbers. print odd numbers in one loop and even in another loop after that.*/
#include<stdio.h>
int main()
{
	int n1,n2,a;
	printf("Enter two numbers :");
	scanf("%d%d",&n1,&n2);
	a=n1;
	printf("Odd numbers:");
	for (n1;n1<=n2;n1++)
	{
		if (n1%2!=0)
		{
			printf("%d ",n1);
		}
	}
	printf("\nEven numbers:");
	for (a;a<=n2;a++){
		if (a%2==0)
		{
			printf("%d ",a);
		}
	}
	return 0;
}

