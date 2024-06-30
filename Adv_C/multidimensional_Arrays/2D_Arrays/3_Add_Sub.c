//3.Write a program  for matrix addition and subtraction.
#include <stdio.h>
int main()
{
	int row,col,i,j;
	printf("Enter a row and col sizes");
	scanf("%d%d",&row,&col);
	int mat1[row][col],mat2[row][col];
	printf("Enter mat1 elements :\n");
	for(i=0;i<row;i++)
	{
		for (j=0;j<col;j++)
		{
			scanf("%d",&mat1[i][j]);
		}
	}
	printf("Enter mat2 elements :\n");
	for(i=0;i<row;i++)
	{
		for (j=0;j<col;j++)
		{
			scanf("%d",&mat2[i][j]);
		}
	}
	printf("Addition of mat1&mat2 elements :\n");
	for(i=0;i<row;i++)
	{
		for (j=0;j<col;j++)
		{
			printf(" %d  ",(mat1[i][j])+(mat2[i][j]));
		}
		printf("\n");
	}
	printf("\n\n");
	printf("ubtraction of mat1&mat2 elements :\n");
	for(i=0;i<row;i++)
	{
		for (j=0;j<col;j++)
		{
			printf(" %d  ",(mat1[i][j])-(mat2[i][j]));
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
