#include<stdio.h>
int main()
{
	int num1,num2,cn=0,j;
	printf("Enter two numbers :");
	scanf("%d%d",&num1,&num2);
	for (num1;num1<=num2;num1++)
	{
		for (j=2;j<=num1;j++)
		{
			if (num1%j==0)
			{
				cn++;
			}
		}

		if (cn==1){
			printf("%d ",num1);
		
		
}
cn=0;
	}
	return 0;
}

