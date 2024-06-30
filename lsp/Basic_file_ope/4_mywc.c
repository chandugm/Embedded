//implement my own word count
#include <stdio.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<errno.h>
#include<unistd.h>
#include<stdlib.h>
int fd,ret;
char buff[100];

int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		printf("command not found\nrequired two arguments\n");
	}
	int word=0,cn=0,line=0,iword=0;
	fd=open(argv[1],O_RDONLY);
	if (fd<0)
	{
		printf("error no:%d\n",errno);
		perror("fd error\n");
	}

	while((ret=read(fd,buff,1)>0))
	{
		if (ret<0)
		{
			printf("error no:%d\n",errno);
			perror("fd1 error\n");
		}

		cn++;
		if (buff[0]==' ' || buff[0]=='\n')
		{
			if(iword)
			{
				iword=0;
				++word;
			}
		}
		else
			iword=1;

		if (buff[0]=='\n')
		{
			line++;
		}
	}
	printf("  %d  %d %d %s\n",line,word,cn,argv[1]);
	close(fd);
	return 0;
}

