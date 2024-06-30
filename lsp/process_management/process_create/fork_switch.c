#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
	int n;
	char *message;
	pid_t pid;
	getchar();
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
	
		message="This is the field\n";
		printf("Children process pid :%d\n",getpid());
		printf("children process parent pid :%d\n",getppid());
		n=5;
		break;
	
	default:
		message="This is the parent\n";
		printf("Parent process parent pid :%d\n",getpid());
		printf("Parent process parent pid :%d\n",getppid());
		n=3;
		break;
}
	for(;n>0;n--)
	{
		puts(message);
		sleep(1);
	}

		
	exit(0);
}

