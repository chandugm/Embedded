
/* 
	Dangling pointer - Case 1: Deallocating memory
	When the memory a pointer points to is freed using free() in C, but the pointer is not set to NULL.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 42;
    printf("Value: %d\n", *ptr);
    
    // Freeing the allocated memory
    free(ptr);
    
    // ptr is now a dangling pointer
    // Using ptr after this point leads to undefined behavior
    printf("Dangling pointer value: %d\n", *ptr); // Undefined behavior

    // To avoid dangling pointer, set ptr to NULL
    ptr = NULL;

    return 0;
}


