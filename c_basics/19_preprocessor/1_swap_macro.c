//1) Define a macro to generate swapping functions for int, float , double and character data types, as a generic function using macros.
#include<stdio.h>
#define SWAP(type, a, b) do { type temp = a; a = b; b = temp; } while(0)
int main() 
{
    int a = 5, b = 6;
    float x = 5.5, y = 6.6;
    char c1 = 'A', c2 = 'B';
    double d1 = 5.555, d2 = 6.666;

    printf("Before swap int: %d, %d\n", a, b);
    SWAP(int, a, b);
    printf("After swap int: %d, %d\n", a, b);

    printf("Before swap float: %f, %f\n", x, y);
    SWAP(float, x, y);
    printf("After swap float: %f, %f\n", x, y);

    printf("Before swap char: %c, %c\n", c1, c2);
    SWAP(char, c1, c2);
    printf("After swap char: %c, %c\n", c1, c2);

    printf("Before swap double: %lf, %lf\n", d1, d2);
    SWAP(double, d1, d2);
    printf("After swap double: %lf, %lf\n", d1, d2);

    return 0;
}

