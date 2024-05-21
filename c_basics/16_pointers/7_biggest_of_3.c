//7 Write a program to find the biggest of three numbers using pointers that point to those numbers.
#include<stdio.h>
int main()
{
	int a,b,c,*p1=&a,*p2=&b,*p3=&c;
	printf("Enter three number");
	scanf("%d%d%d",p1,p2,p3);
	int max=*p1;
	if(max<*p2)
		max=*p2;
	if(max<*p3)
		max=*p3;
	printf("Biggest of three numbers %d",max);
	return 0;
}
