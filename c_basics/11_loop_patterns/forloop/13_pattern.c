/*
        *
      * * *
    * * * * *
  * * * * * * *
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/
#include<stdio.h>
int main ()
{
int i,j,k,n;
printf("Enter odd number only :");
scanf("%d",&n);
int mid_row = (n + 1) / 2;
for (i = 1; i <= mid_row; i++) {
   for (j = 1;j <= mid_row - i; j++) 
{
            printf("  ");
        }
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("* ");
        }
        printf("\n");
}
    for (i = mid_row - 1; i >= 1; i--) {
        for (j = 1;j <=mid_row - i;j++) {
            printf("  ");
        }
        for (k = 1; k <= 2 * i - 1; k++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

