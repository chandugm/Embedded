/*Write a function that takes an integer number as input and prints its multiplication table.return type is  void.*/
#include<stdio.h>
void multable(int num)
{
	for (int i=1;i<=10;i++)
	{
		printf("%d * %d = %d\n",i,num,i*num);
	}
}
int main()
{
	int num;
	printf("Enter a number :");
	scanf("%d",&num);
	multable(num);
	return 0;
}
