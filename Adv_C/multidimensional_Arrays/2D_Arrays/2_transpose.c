/*
Write the following program :
Declare a two dimensional array of elements and find and print its transpose.
eg., if the matrix is :       1 3
                              4 5
                              7 8

its transpose should be :     1 4 7
                              3 5 8
*/
#include<stdio.h>
int main()
{
	int row,col,i,j;
	printf("Enter Row size and coloumn :");
	scanf("%d%d",&row,&col);
	int mat[row][col];
	printf("Enter row and coloumn elements :\n");
	for (i=0;i<row;i++)
	{
		for (j=0;j<col;j++)
		{

			scanf("%d",&mat[i][j]);
		}
	}
	printf("Transpose of matrix :\n");
	for (i=0;i<col;i++)
	{
		for (j=0;j<row;j++)
		{

			printf("%3d",mat[j][i]);
		}
		printf("\n");
	}

		printf("\n");
	
	return 0;
}
