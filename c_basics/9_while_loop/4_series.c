/* Write a program to print the value of below series:
   1 - 1/2 + 1/3 - 1/4 .... + 1/n etc */
#include<stdio.h>
int main()
{
	int num,i=1,sign=1;
	float value=0;
	printf("Enter a number :");
	scanf("%d",&num);
	while(i<=num)
	{
		value+=sign*(1.0/i);
		sign*=-1;
		i++;
	}
	printf("%.2f\n",value);
	return 0;
}
