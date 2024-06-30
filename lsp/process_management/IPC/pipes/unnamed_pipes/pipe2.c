#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
	int data_processed; // Variable to store the amount of data processed
	int file_pipes[2]; // Array to hold the file descriptors for the pipe
	const char some_data[] = "123"; // Data to be written to the pipe
	char buffer[BUFSIZ + 1]; // Buffer to store data read from the pipe
	pid_t fork_result; // Variable to store the result of the fork operation

	memset(buffer, '\0', sizeof(buffer)); // Initialize the buffer to zeros

	// Create the pipe and check if it was successful
	if (pipe(file_pipes) == 0) {
		getchar(); // Pause to allow observation before fork
		fork_result = fork(); // Create a child process
		getchar(); // Pause to allow observation after fork

		// Check if the fork operation was successful
		if (fork_result == -1) {
			fprintf(stderr, "Fork failure"); // Print an error message if fork fails
			exit(EXIT_FAILURE); // Exit the program with a failure status
		}

		// If fork_result equals zero, we are in the child process
		if (fork_result == 0) {
			// Read data from the pipe
			data_processed = read(file_pipes[0], buffer, BUFSIZ);
			// Print the number of bytes read and the data
			printf("Read %d bytes: %s\n", data_processed, buffer);
			exit(EXIT_SUCCESS); // Exit the child process with a success status
		}
		// Otherwise, we are in the parent process
		else {
			// Write data to the pipe
			data_processed = write(file_pipes[1], some_data, strlen(some_data));
			// Print the number of bytes written
			printf("Wrote %d bytes\n", data_processed);
		}
	}
	exit(EXIT_SUCCESS); // Exit the parent process with a success status
}

