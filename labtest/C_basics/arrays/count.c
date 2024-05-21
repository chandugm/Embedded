#include<stdio.h>
int main() 
{
	int size;
	printf("Enter size: ");
	scanf("%d", &size);
	if (size <= 0) 
	{
		printf("Enter size greater than zero\n");
		return 0;
	}
	int arr[size];
	printf("Enter %d elements:\n", size);
	for (int i = 0; i < size; i++) 
	{
		scanf("%d", &arr[i]);
	}
	int big = 0; 
	int cn = 1; 
	for (int i = 0; i < size - 1;i++) 
	{
		if (arr[i] < arr[i + 1]) 
		{
			cn++;
		} 
		else 
		{
			if (big < cn) 
			{
				big = cn;
			}
			cn = 1; 
		}
	}
	if (big <cn)
	{
		big = cn;
	}
	printf("%d\n", big);
	return 0;
}

