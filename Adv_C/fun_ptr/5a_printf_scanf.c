/*
5) Read an integer and print it back using function pointers for printf and scanf.

printf declaration to use : int printf(char * , ...);
scanf declaration to use : int scanf(char *, ...);

Try it again using alias name and array of function pointers.
*/
#include <stdio.h>

int main() {
    // Declare function pointers for printf and scanf
    int (*myPrintf)(const char *, ...) = printf;
    int (*myScanf)(const char *, ...) = scanf;

    int num;

    // Use function pointers to read an integer from the user
    myPrintf("Enter an integer: ");
    myScanf("%d", &num);

    // Use function pointers to print the integer back
    myPrintf("You entered: %d\n", num);

    return 0;
}
