/*write a program to read a number n, and print sum of all the numbers from 1 to n.*/
#include<stdio.h>
int main()
{
	int i=1,sum=0,num;
	printf("Enter a number :");
	scanf("%d",&num);
	while (i<=num)
	{
		printf("%d+",i);
		sum+=i;
		i++;
	}
	//printf("sum of first %d numbers is %d",num,sum);
	printf("\b=%d",sum);
	return 0;
}
