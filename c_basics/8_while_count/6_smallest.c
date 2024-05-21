/*6) Read  n numbers from user ,and print the smallest number of all.*/
#include<stdio.h>
int main()
{
	int i=0,n,small,num;
	printf("Enter no of elements :");
	scanf("%d",&n);
	while(i<n)
	{
		printf("Enter numbers :");
		scanf("%d",&num);
		if (i==0)
		{
			small=num;
		}
		small=(num<small)?num:small;
		i++;
	}
	printf("%d",small);
	return 0;
}     
