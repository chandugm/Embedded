/*Read n numbers in ascending order. If a number entered is bigger than previous number, then count it. If it is smaller, then dont count it, instead let the loop repeat itself and read another number*/
#include<stdio.h>
int main()
{
	int i=2,n,cnum,pnum,cn=0;
	printf("Enter no.of elements :");
	scanf("%d",&n);
	printf("Enter first number :");
	scanf("%d",&pnum);
	printf("Enter numbers ascending order only:");
	while(i<=n)
	{
		scanf("%d",&cnum);
		if (cnum>pnum)
		{
			cn++;
		}
		i++;
		pnum=cnum;
	//	printf("%d",cn);
	}
	printf("count is %d\n",cn);
	return 0;
}

