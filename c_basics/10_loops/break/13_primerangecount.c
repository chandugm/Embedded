/*Write a program to read two numbers, and print all prime numbers between the given numbers. print how many prime numbers are there at the end.*/
#include<stdio.h>
int main()
{
	int num1,num2,i,cn=0;
	printf("Enter Two numbers :");
	scanf("%d%d",&num1,&num2);
for (num1;num1<=num2;num1++)
{	
	for (i=2;i<=num1/2;i++)
	{
		if (num1%i==0)
		{
			break;
		}
	}

	if (i==num1/2+1)
	{	cn+=1;
		printf("%d ",num1);
	}
}
	printf("\ncount of prime numbers:%d\n",cn);
	return 0;
}
