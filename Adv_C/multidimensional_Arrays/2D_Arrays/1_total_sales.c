/*
   Declare a two-dimensional array of elements for sales details of a store, for each item, for each salesman. Take the sales values as input and print the array in matrix form.
   Find out and print the following :
   1 ) Total sales by each sales man
   2 ) Total sales for a item
   3 ) Total sales
 */
#include<stdio.h>
int main()
{
	int row,col,i,j,sum=0;
	printf("Enter no of sales men :");
	scanf("%d",&row);
	printf("Enter no of items :");
	scanf("%d",&col);
	int sales[row][col];
	for(i=0;i<row;i++)
	{
		printf("Enter sales for salesman %d:",i+1);
		for (j=0;j<col;j++)
		{
			scanf("%d",&sales[i][j]);
		}
	}
	printf("Sales matrix:\n");
	for(i=0;i<row;i++)
	{
		for (j=0;j<col;j++)
		{
			printf("%d ",sales[i][j]);
		}
		printf("\n");
	}

	printf("\nTotal sales by each sales man:\n");

	for(i=0;i<row;i++)
	{
		printf("sales man %d:",i+1);
		sum=0;
		for (j=0;j<col;j++)
		{
			sum+=sales[i][j];
		}
		printf("%d\n",sum);
	}
	printf("\nTotal sales of each item\n");
	for(i=0;i<row;i++)
	{   
		printf("Item  %d:",i+1);
		sum=0;
		for (j=0;j<col;j++)
		{   
			sum+=sales[j][i];
		}   
		printf("%d\n",sum);
	}   
	printf("\nTotal sales: ");
	sum=0;
	for(i=0;i<row;i++)
	{   


		for (j=0;j<col;j++)
		{   
			sum+=sales[j][i];
		}     
	}   
	printf("%d\n",sum);
	return 0;        
}   



