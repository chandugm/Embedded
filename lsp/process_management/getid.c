#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
int main()
{
	getchar();
		sleep(2);
		printf("Process pid :%d\n",getpid());
		
		
		printf("Parent process  pid :%d\n",getppid());

	return 0;
}
