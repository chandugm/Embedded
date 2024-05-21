#include <stdio.h>

// Function to calculate size using bitwise operators
unsigned int custom_sizeof(int type) {
    // Create a pointer of the given type
    int *ptr = (int *)1;

    // Calculate size by finding the difference between adjacent memory addresses
    unsigned int size = ((char *)(ptr + 1) - (char *)ptr);

    // If the size is less than or equal to zero, return 1 (minimum size)
    // This is to handle edge cases where the pointer arithmetic might not behave as expected
    return size > 0 ? size : 1;
}

int main() {
    // Example usage
    printf("Size of int: %u bytes\n", custom_sizeof(int));
    printf("Size of char: %u bytes\n", custom_sizeof(char));
    printf("Size of float: %u bytes\n", custom_sizeof(float));

    return 0;
}
