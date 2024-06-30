//6) Define a sizeof macro that will find the size of a given variable as a parameter, using pointers.
#include <stdio.h>

#define SIZEOF(type) ((char*)(&type + 1) - (char*)(&type))

int main() {
    int intVar;
    double doubleVar;
    char charVar;

    printf("Size of int: %ld bytes\n", SIZEOF(intVar));
    printf("Size of double: %ld bytes\n", SIZEOF(doubleVar));
    printf("Size of char: %ld bytes\n", SIZEOF(charVar));

    return 0;
}

