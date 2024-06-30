#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void my_system(const char *command) 
{
	pid_t pid = fork();
	if (pid == -1) 
	{
		perror("fork failed");
		exit(EXIT_FAILURE);
	} 
	else if (pid == 0) 
	{
		// Child process
		execl("/bin/sh", "sh", "-c", command, (char *)NULL);
		// If execl returns, there was an error
		perror("execl failed");
		exit(EXIT_FAILURE);
	} 
	else 
	{
		// Parent process
		int status;
		if (waitpid(pid, &status, 0) == -1) 
		{
			perror("waitpid failed");
		} 
		else 
		{
			if (WIFEXITED(status)) 
			{
				printf("Command exited with status %d\n", WEXITSTATUS(status));
			} 
			else if (WIFSIGNALED(status)) 
			{
				printf("Command killed by signal %d\n", WTERMSIG(status));
			}
		}
	}
}

int main() {
	char str[100];
	printf("Enter command: ");
	scanf(" %[^\n]", str);
	my_system(str);
	return 0;
}

