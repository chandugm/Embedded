/*
14) write a function to take an array as input, and count how many times the biggest number is repeated in that array, and return the count.
eg., array : {10, 14,16,10, 10 , 16, 14, 14, 16, 16};
           output : biggest number is repeated 4 times
*/
#include<stdio.h>
int count(int arr[],int);
int main()
{
	int size;	
	printf("Enter size :");
	scanf("%d",&size);
	int arr[size];
	for (int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	int c=count(arr,size);
	if (c==0) printf("Enter size greater than zero\n");
	else printf("biggest number is repeated %d times\n",c);
}


int count(int arr[],int size)
{
if (size <= 0)
return 0;	
int max=arr[0];	
	int cn=0;
	for(int i=0;i<size;i++)
	{
		if (max<arr[i])
		{
			max=arr[i];
			cn=1;
		}
		else if(max == arr[i])
		{
			cn++;
		}
	}
	return cn;
}
