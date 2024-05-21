/*Find the LCM of 2 given numbers*/
#include<stdio.h>
int main()
{
	int num1,num2,i,lcd=1,temp;
	printf("Enter two numbers :");
	scanf("%d%d",&num1,&num2);
	temp=num1>num2?num1:num2;
	for (;1;temp++)
	{
		if (temp%num1==0 && temp%num2==0)
		{
	   		printf("Least common factor is %d\n",temp);
				break;
	
		}
	}
	return 0;
}

