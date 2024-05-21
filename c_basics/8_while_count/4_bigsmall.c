/*Read n numbers from user, and while reading every number, print if the number is bigger or smaller than the previous number. For first number, there wont be any output as it is the first one*/
#include<stdio.h>
int main()
{
	int i=2,n,cnum,pnum,big=0,small=0;
	printf("Enter no of numbers :");
	scanf("%d",&n);
	printf("Enter first number :");
	scanf("%d",&pnum);
	while(i<=n)
	{

		scanf("%d",&cnum);
		if (pnum<cnum)
		{
			printf("big\n");
			big++;
		}
		else
		{
			printf("small\n");	
			small++;
		}
		pnum=cnum;
		i++;
	}
	printf("big count :%d small count :%d\n",big,small);
	return 0;
}
