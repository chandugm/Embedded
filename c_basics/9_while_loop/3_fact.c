/*Write a program to read a number n and print the factorial of n.*/
#include<stdio.h>
int main()
{
	int i=1,fact=1,num,n;
	printf("Enter a number:");
	scanf("%d",&num);
	n=num;
	while(n>0)
	{
		fact *=n;
		n--;
		//num--;
		//i++;
	}

	printf("factorial of %d is %d",num,fact);
	return 0;
}


