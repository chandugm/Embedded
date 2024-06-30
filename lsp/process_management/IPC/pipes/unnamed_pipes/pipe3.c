#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{
	int data_processed; // Variable to store the amount of data processed
	int file_pipes[2]; // Array to hold the file descriptors for the pipe
	const char some_data[] = "123"; // Data to be written to the pipe
	char buffer[BUFSIZ + 1]; // Buffer to store data read from the pipe
	pid_t fork_result; // Variable to store the result of the fork operation

	memset(buffer, '\0', sizeof(buffer)); // Initialize the buffer to zeros

	// Create the pipe and check if it was successful
	if (pipe(file_pipes) == 0) {
		fork_result = fork(); // Create a child process

		// Check if the fork operation was successful
		if (fork_result == (pid_t)-1) {
			fprintf(stderr, "Fork failure"); // Print an error message if fork fails
			exit(EXIT_FAILURE); // Exit the program with a failure status
		}

		// If fork_result equals zero, we are in the child process
		if (fork_result == 0) {
			// Format the file descriptor into a string and store it in buffer
			sprintf(buffer, "%d", file_pipes[0]);

			// Replace the child process with a new program ("pipe4")
			// Pass the file descriptor as an argument to the new program
			(void)execl("pipe4", "pipe4", buffer, (char *)0);
			exit(EXIT_FAILURE); // Exit the child process with a failure status if execl fails
		}
		// Otherwise, we are in the parent process
		else {
			// Write data to the pipe
			data_processed = write(file_pipes[1], some_data, strlen(some_data));
			// Print the process ID and the number of bytes written
			printf("%d - wrote %d bytes\n", getpid(), data_processed);
		}
	}
	exit(EXIT_SUCCESS); // Exit the parent process with a success status
}

