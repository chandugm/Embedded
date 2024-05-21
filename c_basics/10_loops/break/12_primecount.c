/*Write a program to find out if an integer entered by a user is a prime number or not. Count the factors of the given number to identify prime number.*/
#include<stdio.h>
int main()
{
	int num,i,cn=0,c=0;
	printf("Enter a number :");
	scanf("%d",&num);
	for (i=1;i<=num;i++)
	{

		if (num%i==0)
		{
			cn+=1;
		}
		else
	{
			c+=1;
			}
	}
	if (cn==2){
		printf("prime and count of factors:%d\n",cn);
	}
	else
		printf("Not prime  because  factors are:%d",c);

	return 0;
}	

