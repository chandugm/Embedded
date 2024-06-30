//implementing my cat function
#include<stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<errno.h>
#include<unistd.h>
int fd,ret;
char buff[100];
int main(int argc,char *argv[])
{
for(int i=1;i<argc;i++)
{
	fd=open(argv[i],O_RDONLY );
	if (fd<0)
	{
		printf("open Error no :%d\n",errno);
		perror("Open fail\n");
	}
	int nread=read(fd,buff,1);
	if (nread<0)
	{
		printf("read Error no :%d\n",errno);
		perror("read fail\n");
	}
	while(0!=nread)
	{
		write(1,buff,nread);
		nread=read(fd,buff,1);	
	}
	printf("\n");
}

return 0;
}
