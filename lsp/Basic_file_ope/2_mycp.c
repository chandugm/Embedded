//my own copy command
#include <stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<errno.h>
#include<unistd.h>
#include<stdlib.h>
int fd1,fd2,ret;
char buff[10];
int main(int argc,char *argv[])
{
	if (argc !=3)
	{
		printf("comaand not found\nEnter Two arguments only\n");
		return 0;
	}
	fd1=open(argv[1],O_RDONLY);
	if (fd1<0)
	{
		printf("error no:%d\n",errno);
		perror("fd1 error\n");
	}
	fd2=open(argv[2],O_WRONLY  | O_TRUNC | O_CREAT , 0666);
	if (fd2<0)
	{
		printf("error no:%d\n",errno);
		perror("fd2 error\n");
	}



	while(ret=read(fd1,buff,1)>0)
	{
		if (ret<0)
		{
			printf("error no:%d\n",errno);
			perror("read error\n");
		}
		ret=write(fd2,buff,1);
		if (ret<0)
		{
			printf("error no:%d\n",errno);
			perror("write error\n");
		}
	}
	close(fd1);
	close(fd2);
	return 0;
}
