/*Write  a program to read n numbers from the keyboard and find their sum.*/
#include<stdio.h>
int main()
{
	int i=1,n,sum =0,num;
	printf("Enter how many numbers :");
	scanf("%d",&n);
	printf("Enter numbers :");
	while(i<=n)
	{
		scanf("%d",&num);
		sum+=num;
		i++;
	}
printf("sum of entered %d numbers:%d",n,sum);
	return 0;
}
