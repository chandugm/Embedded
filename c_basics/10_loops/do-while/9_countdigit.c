/*Write a program to input a number and count the digits in it.
Eg.
0 - number of digits 1
12 – number of digits 2
155 – number of digits 3
*/
#include <stdio.h>

int main() {
    int number, digitCount = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number < 0) {
        number *= -1; 
    }

    do {
        digitCount++;
        number /= 10;
    } while (number != 0);

    printf("Number of digits: %d\n", digitCount);

    return 0;
}

