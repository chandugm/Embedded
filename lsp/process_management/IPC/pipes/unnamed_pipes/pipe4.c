#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int data_processed; // Variable to store the amount of data processed
    char buffer[BUFSIZ + 1]; // Buffer to store data read from the pipe
    int file_descriptor; // Variable to store the file descriptor passed as an argument

    memset(buffer, '\0', sizeof(buffer)); // Initialize the buffer to zeros

    // Convert the string argument to an integer and store it in file_descriptor
    sscanf(argv[1], "%d", &file_descriptor);

    // Read data from the pipe using the file descriptor
    data_processed = read(file_descriptor, buffer, BUFSIZ);

    // Print the process ID, number of bytes read, and the data read
    printf("%d - read %d bytes: %s\n", getpid(), data_processed, buffer);

    exit(EXIT_SUCCESS); // Exit the program with a success status
}

