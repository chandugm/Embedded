/*Write a program to input a number and find and print the reverse of the number.
*/
#include <stdio.h>

int main() {
    int number, reverse = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    do {
        remainder = number % 10;
        reverse = reverse * 10 + remainder;
        number /= 10;
    } while (number != 0);

    printf("Reverse of the number: %d\n", reverse);

    return 0;
}

