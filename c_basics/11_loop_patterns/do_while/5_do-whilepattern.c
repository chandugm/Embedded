/*using while ,do while and for loops :
    *
   * *
  * * *
 * * * *
* * * * *
*/
#include<stdio.h>

int main() {
    int i = 0, j, k, n;
    printf("Enter a number :");
    scanf("%d", &n);

    do {
        j = 1;
        do {
	    if (i==n-1)
		printf("\b");
	    else
		printf(" ");
            j++;
        } while (j < n - i);

        k = 0;
        do {
            printf("* ");
            k++;
        } while (k <= i);

        printf("\n");
        i++;
    } while (i < n);

    return 0;
}

