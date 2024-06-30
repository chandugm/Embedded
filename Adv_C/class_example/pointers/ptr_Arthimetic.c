#include <stdio.h>
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int *ptr=arr;
	printf("%d\n",*arr);
	printf("%p\n",&arr[0]);
	printf("%d\n",arr[9]);
	printf("%p\n",&arr[9]);
	return 0;
}
