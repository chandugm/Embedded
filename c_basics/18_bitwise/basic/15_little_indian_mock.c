#include <stdio.h>

int main()
{
    unsigned int x = 0xABCD12; // Initialize x with the hexadecimal value 0xABCD12
    
    // Print the result of a complex bit manipulation expression in hexadecimal format
    printf("%X",
        (x << 8) & (0xFF0000) | // Shift x left by 8 bits and mask with 0xFF0000
        (x << 12) & (0x00F000) | // Shift x left by 12 bits and mask with 0x00F000
        (x >> 12) & (0x000FF0) | // Shift x right by 12 bits and mask with 0x000FF0
        (x >> 4) & (0x00000F) // Shift x right by 4 bits and mask with 0x00000F
    );
    
    return 0; // Return 0 to indicate successful execution
}
