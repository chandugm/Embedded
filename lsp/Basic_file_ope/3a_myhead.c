//implementing my own head function
#include <stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<errno.h>
#include<unistd.h>
#include<stdlib.h>
int fd,ret;
char buff[100],ch;
int line=0,nread,line_num;
int main(int argc,char *argv[])
{
	if(argc>3)
	{
		printf("command not found\n");
		return 0;
	}
	if(argv[2]==NULL)
	{
		line_num=10;
	}
	else
	{
		line_num=atoi(argv[2]);
	}
	fd=open(argv[1],O_RDONLY );
	if (fd<0)
	{
		printf("open Error no :%d\n",errno);
		perror("Open fail\n");
	}


	while( ( nread=read(fd,buff,1))>0 && (line<line_num))
	{
		write(1,buff,1);
		if(buff[0]=='\n')
		{
			line++;
		}
	}


	return 0;
}
