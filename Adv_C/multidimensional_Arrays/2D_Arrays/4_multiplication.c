//Write a program  for matrix multiplication.
#include <stdio.h>
int main()
{
	int r1,c1,r2,c2,i,j,sum=0,k;
scan:printf("Enter a row and col sizes of mat1");
     scanf("%d%d",&r1,&c1);
     printf("Enter a row and col sizes mat2");
     scanf("%d%d",&r2,&c2);
     int mat1[r1][c1],mat2[r2][c2],mul[r1][c2];
     if(c1!=r2)
     {
	     printf("Enter mat1 coloumn size and mat2 row size same\n ");
	     goto scan;
     }
     else


     printf("Enter mat1 elements :\n");
     for(i=0;i<r1;i++)
     {
	     for (j=0;j<c1;j++)
	     {
		     scanf("%d",&mat1[i][j]);
	     }
     }
     printf("Enter mat2 elements :\n");
     for(i=0;i<r2;i++)
     {
	     for (j=0;j<c2;j++)
	     {
		     scanf("%d",&mat2[i][j]);
	     }
     }

     for(i=0;i<r1;i++)
     {
	     for (j=0;j<c2;j++)
	     {
		     mul[i][j]=0;
		     for(k=0;k<c1;k++)
		     {
			     mul[i][j]+= mat1[i][k] * mat2 [k][j];
		     }

	     }

     }
    
     printf("multiplication of mat1&mat2 elements :\n");
	 for(i=0;i<r1;i++)
     {   
             for (j=0;j<c2;j++)
             {   
			printf(" %d ",mul[i][j]);
}
printf("\n");
}
     return 0;
}


