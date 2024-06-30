
/*
	Case 3: Dangling pointer - Scope exit
When a pointer points to a local variable in a block of code and that block of code ends, the local variable goes out of scope, but the pointer still     points to that memory location.

*/
#include <stdio.h>

int main() {
    int *ptr;
    {
        int localVar = 50;
        ptr = &localVar;
    } // localVar goes out of scope here

    // ptr is now a dangling pointer
    printf("Dangling pointer value: %d\n", *ptr); // Undefined behavior

    return 0;
}


