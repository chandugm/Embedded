#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<errno.h>
#include<unistd.h>
int fd,ret;
char buff[10];
int main()
{
	fd=open("cm.txt",O_RDWR | O_CREAT ,0666);
	if (fd<0)
	{
		printf("open Error no :%d\n",errno);
		perror("Open fail\n");
	}
	ret=write(fd,"Chandu",6);
	if (ret<0)
	{
		printf("Errno:%d\n",errno);
		perror("Write Fail\n");
	}
	ret = lseek(fd,0,SEEK_SET);//reposition the cursor to desired position
	if (ret<0)
	{
		printf("Errno:%d\n",errno);
		perror("lseek fail\n");
	}
	ret=read(fd,buff,10);
	if (ret<0)
	{
		printf("Errno:%d\n",errno);
		perror("read fail\n");
	}
	write(1,buff,10);
	close(fd);
	return 0;
}
