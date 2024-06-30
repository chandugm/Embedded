//implemnt my own tail function 
#include <stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<errno.h>
#include<unistd.h>
#include<stdlib.h>
int fd,ret;
char buff[100];
int line=0,nread,line_num,cn=0;
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
	while((ret=read(fd,buff,1)>0))
	{
		if (ret<0)
		{
			printf("error no:%d\n",errno);
			perror("fd1 error\n");
		}

		if (buff[0]=='\n')
			line++;
	}
	line_num=line-line_num;
	lseek(fd,0,SEEK_SET);
	while(read(fd,buff,1)>0 && cn<line_num )
	{
		if(buff[0]=='\n')
		{
			cn++;
		}
	}
	lseek(fd,-1,SEEK_CUR);	
	while(read(fd,buff,1)>0)
	{
		write(1,buff,1);
	}
	return 0;
}
