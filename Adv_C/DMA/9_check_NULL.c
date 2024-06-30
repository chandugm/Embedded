//Write a program to create a scenario where malloc() fails? And mentioned after how many bytes allocation is FAIL?
#include <stdlib.h>
#include <stdio.h>

int main() {
    long int cn = 0;
    int Size = 1000000000; // 1 billion bytes per chunk (~953 MB)
    while (1) {
        void* ptr =malloc(Size * sizeof(char));
        cn++;
        if (ptr == NULL) {
		printf("count value:%ld\n",cn);
            // Print the amount of memory successfully allocated before failure
            printf("Memory allocation failed after %ld GB\n", (cn * Size) / (1024 * 1024 * 1024));
            printf("Memory not allocated\n");
            exit(1);
        }
    }
    return 0;
}

