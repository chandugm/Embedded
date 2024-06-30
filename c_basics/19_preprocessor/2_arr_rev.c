//2) Define a macro to generate a generic function that takes & prints an array in reverse order. Generate the functions for int, float, double data types.
#include<stdio.h>
#define REV(type,arr,n)\
	for(int i=0;i<n/2;i++)\
{\
	type temp=arr[i];\
	arr[i]=arr[n-1-i];\
	arr[n-1-i]=temp;\
}
int main()
{
	int n;
	printf("Enter array size:\n");
	scanf("%d",&n);
	int arr[n];
	printf("Enter arry elements:\n");
	for (int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	REV(int,arr,n);
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	REV(float,arr,n);
	for(int i=0;i<n;i++)
	{
		printf("%f ",(float)arr[i]);
	}
	printf("\n");
	REV(double,arr,n);
	for(int i=0;i<n;i++)
	{
		printf("%lf ",(double)arr[i]);
	}
	return 0;
}
