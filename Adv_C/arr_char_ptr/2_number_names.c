/*
2) read an integer number, display the number as a number name expansion.
eg., 458 : four five eight
*/
#include<stdio.h>
int main()
{
	int num,i=0,arr[100];
	char *names[]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
	printf("Enter a number:");
	scanf("%d",&num);
	while(num>0)
	{
		arr[i++]=num%10;
		num/=10;
	}
	for (int j=i-1;j>=0;j--)
	{
		int x=arr[j];
		printf("%s ",names[x]);
	}
	return 0;
}
