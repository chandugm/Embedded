/*#include<stdio.h>
int main()
{
	int i,j,n=5;
	for (i=0;i<n;i++)
	{
		for (j=0;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}*//*
#include<stdio.h>
int main()
{
	int i=0,j,n=5;
	while(i<n)
	{
		j=0;
		while (j<=i)
		{
			printf("* ");
			j++;
		}
		printf("\n");
		i++;
	}
	return 0;
}*/

#include<stdio.h>

int main() {
    int i = 0, j, n=5;
    do {
        j = 0;
        do {
            printf("* ");
            j++;
        } while (j <= i); 
    
        printf("\n");
        i++;
    } while (i < n); 
    
    return 0;
}

