/*
 Case 2: Dangling pointer - Local variable
       When a function returns a pointer to a local variable, the local variable goes out of scope, but the pointer still points to that memory locat    ion.

*/

#include <stdio.h>

int* getPointerToLocalVariable() {
    int localVar = 100;
    return &localVar;  // Returning address of local variable
}

int main() {
    int *ptr = getPointerToLocalVariable();
    int a=5;
   ptr = &a;	    
    // ptr is now a dangling pointer because localVar is out of scope
    printf("Dangling pointer value: %d\n", *ptr); // Undefined behavior

    return 0;
}


