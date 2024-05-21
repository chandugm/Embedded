/*Read n number of numbers from user (n value taken as input) and print if each number is even or odd.*/
#include<stdio.h>
int main()
{
	int i=1,n,num,e=0,o=0;
	printf("Enter how many numbers :");
	scanf("%d",&n);
	while(i<=n)
	{
		scanf("%d",&num);
		if (num%2==0)
		{
			printf("Even\n");
			e++;
		}
		else
		{
			printf("Odd\n");
			o++;
		}
		i++;
	}
	printf("Even:%d Odd:%d",e,o);
	return 0;
}
