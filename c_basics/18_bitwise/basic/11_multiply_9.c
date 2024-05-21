//11. WAP multiply a number by 9 using bit shift.

#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number :");
	scanf("%d",&num);
	printf("After multiplication :%d\n",(num<<((9/2)-1))+5);
	return 0;
}
