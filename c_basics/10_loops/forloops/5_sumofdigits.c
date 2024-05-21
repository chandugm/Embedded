/* Write a program to input a number and print the sum of the digits of the number.
   Eg., 
   0 - sum of the digits 0
   12 - sum of the digits 3
   155 - sum of the digits 11
 */
#include<stdio.h>
int main()
{
	int num,n,s,sum=0;
	printf("Enter a number :");
	scanf("%d",&num);
	for (;num>0;)
	{
		s=num%10;
		num/=10;
		sum+=s;
	}
	printf("%d",sum);
	return 0;
}
