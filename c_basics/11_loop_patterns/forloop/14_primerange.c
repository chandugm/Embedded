/*Write a program to print all prime numbers between 2 given integers.

eg., input: 10 20
prime numbers between 10 & 20 are: 11 13 17 19
*/
#include<stdio.h>
int main()
{
	int num1,num2,cn=0,j;
	printf("Enter two numbers :");
	scanf("%d%d",&num1,&num2);
	for (num1;num1<=num2;num1++)
	{
		for (j=2;j<=num1;j++)
		{
			if (num1%j==0)
			{
				cn++;
			}
		}

		if (cn==1){
			printf("%d ",num1);
		
		
}
cn=0;
	}
	return 0;
}


