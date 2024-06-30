/*1)Create a character pointer array, initialise the pointers to read only strings. Sort the array and print.*/
#include <stdio.h>
#include <string.h>

void swap(char **a,  char **b)
{
	char *temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	char *arr[] = {"tueday","monday","sunday","friday","thusday","wednesday","saturday"  };
	int n=sizeof(arr)/sizeof(arr[0]);
	/*int m=sizeof(arr[0]);
	  printf("%d\n",n);
	  printf("%d\n",m);*/

	for (int i=0;i<n-1;i++)
	{
		for (int j=i+1;j<n;j++)
		{
			if (strcmp(arr[i],arr[j])>0)
			{
				swap(&arr[i],&arr[j]);
			}
		}
	}
	for (int i=0;i<n;i++)
	{
		printf("%s\n",arr[i]);
	}
	return 0;
}
