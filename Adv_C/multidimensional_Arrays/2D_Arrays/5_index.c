/*5 )Search for an element in a two dimensional array, and print its position - as row and column numbers. write a search function that will receive the array and return row and column indexes as output.*/
#include <stdio.h>
int search(int col,int mat1[][col],int row,int *rindex,int *cindex,int element);
int main()
{
	int i,j,r1,c1,rindex,cindex,element;
scan:printf("Enter a row and col sizes of mat1");
     scanf("%d%d",&r1,&c1);
     int mat1[r1][c1];
     printf("Enter mat1 elements :\n");
     for(i=0;i<r1;i++)
     {
	     for (j=0;j<c1;j++)
	     {
		     scanf("%d",&mat1[i][j]);
	     }
     }
     printf("enter search element :");
     scanf("%d",&element);
     int t=search(c1,mat1,r1,&rindex,&cindex,element);
     if (t==0)
     {
	     printf("row_index=%d,Coloumn_index=%d",rindex,cindex);
     }
     else
     {
	     printf("Element Not found");
     }
     return 0;
}
int search(int col,int mat1[][col],int row,int *rindex,int *cindex,int element)
{
	for(int i=0;i<row;i++)
	{
		for (int j=0;j<col;j++)
		{

			if (mat1[i][j]==element)
			{
				*rindex=i;
				*cindex=j;
				return 0;
			}

		}
	}

	return 1;
}

