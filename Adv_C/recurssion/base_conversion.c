#include<stdio.h>
void convert(int num,int base)
{
	int rem=num%base;
	if (num == 0)
		return;
	convert(num/base,base);
	if (rem <10)
	{
		printf("%d",rem);
	}
	else 
		printf("%c",rem-10+'A');
}
int main()
{
int num,base;
printf("Enter a number with base");
scanf("%d %d",&num,&base);
convert(num,base);
}
