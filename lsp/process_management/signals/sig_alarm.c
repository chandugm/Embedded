#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

static int alarm_fired = 0;

void ding(int signum) 
{
	alarm_fired = 1;
}

int main() 
{
	pid_t pid;
	printf("Alarm application starting\n");

	pid = fork();
	if (pid == -1) 
	{
		perror("Fork failed");
		exit(EXIT_FAILURE);
	}
	 else if (pid == 0) 
	{
		// Child process
		sleep(10);
		kill(getppid(), SIGALRM);  // Send SIGALRM to itself
		exit(EXIT_SUCCESS);
	}

	// Parent process
	printf("Waiting for alarm to go off\n");
	signal(SIGALRM, ding);  // Set up signal handler

	pause();  // Wait for a signal to arrive

	if (alarm_fired) 
	{
		printf("Ding!\n");
	}

	printf("Done\n");
	exit(EXIT_SUCCESS);
}

