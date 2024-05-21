/*
* * * * *
  * * * *
    * * *
      * *
        *
*/
#include<stdio.h>
int main() {
	int i = 0, j, k, n;
	printf("Enter a number :");
	scanf("%d", &n);

	do {
		j = 0;
		do {
			if (i==0)
				printf(" \b");
			else            
				printf("  ");
			j++;
		} while (j < i);

		k = 0;
		do {
			printf("* ");
			k++;
		} while (k < n - i);

		printf("\n");
		i++;
	} while (i < n);

	return 0;
}

