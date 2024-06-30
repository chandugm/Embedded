#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
	pid_t pid;
	getchar();
	for(int i=0;i<10;i++)
	{
		printf("1");
	}
		printf("\n");
	pid=fork();
	if(pid==-1)
	{
		perror("fork fails\n");
	}
	if(pid==0)
	{
		sleep(2);
		printf("Children process pid :%d\n",getpid());
		printf("children process parent pid :%d\n",getppid());
	}
	else
	{
		sleep(2);
		printf("Parent process parent pid :%d\n",getpid());
		printf("Parent process parent pid :%d\n",getppid());
	}
	for(int i=0;i<10;i++)
	{
		printf("1");
	}
		printf("\n");
	return 0;
}
