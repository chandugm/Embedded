#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main()
{
	int n;
	char *message;
	pid_t pid;
	getchar();
	int exit_code;
	for(int i=0;i<10;i++)
	{
		printf("1");
	}
	printf("\n");
	pid=fork();
	switch(pid)
	{
		case -1:
			perror("fork fails\n");
			exit(0);
		case 0:

			message="This is the child\n";
			printf("Children process pid :%d\n",getpid());
			printf("children process parent pid :%d\n",getppid());
			n=5;
			exit_code=37;
			break;

		default:
			message="This is the parent\n";
			printf("Parent process parent pid :%d\n",getpid());
			printf("Parent process parent pid :%d\n",getppid());
			n=3;
			exit_code=0;
			break;
	}
	for(;n>0;n--)
	{
		puts(message);
		sleep(1);
	}
	if(pid!=0)
{

		int stat_val;
	pid_t child_pid;
	child_pid=wait(&stat_val);
	printf("children has finishied:PID=%d\n",child_pid);
	if(WIFEXITED(stat_val))
	{
		printf("Child exited with code %d\n",WEXITSTATUS(stat_val));
	}
	else
		printf("Child terminated abnormally\n");
}
exit(1);
}
