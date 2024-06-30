//find sum of first n numbers using recurssion
#include<stdio.h>
int sum(int n)
{
//	static int s=0;
	if (n==0)
//		return s;
		return 0;
//	s=n+s;
//	s=n+sum(n-1);
//	n--;
//		return sum(n);
//		return s;
		return (n+sum(n-1));
}
int main()
{
	int n;
	printf("Enter a number :");
	scanf("%d",&n);
	printf("sum of n numbers:%d\n",sum(n));
	return 0;
}
