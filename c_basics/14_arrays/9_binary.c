//9) Write a program to print an integer in binary format using arrays.

int num,i=0,k=0,rem[15];
#include<stdio.h>
int main()
{
	printf("Enter a number :");
	scanf("%d",&num);
	while(num>0)
	{
		rem[i]=num%2;
		num/=2;
		i++;
	}
	int k=i;
	for (i=0;i<k;i++)
	{
		printf("%d",rem[k-i-1]);
	}
	return 0;
}
