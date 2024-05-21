/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

#include<stdio.h>

int main() {
    int i, j, n, digit;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        digit = 1;
        for (j = 0; j < i; j++) {
          if (i % 2 == 0) {
                printf("%d ", j % 2);
            } else {
                printf("%d ", (j + 1) % 2);
            }
        }
        printf("\n");
    }
    
    return 0;
}
*/
#include<stdio.h>

int main() {
    int i, j, n, digit;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        digit = 1;
        for (j = 0; j < i; j++) {
            if (digit == 1) {
                printf("1 ");
                digit = 0;
            } else {
                printf("0 ");
                digit = 1;
            }
        }
        printf("\n");
    }
    
    return 0;
}

