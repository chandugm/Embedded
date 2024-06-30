#include<stdio.h>
#include<unistd.h>
int main()
{
	int ret;
	char buff[10];

	ret=read(0,buff,6);
	if (ret==0)
	{
		printf("End of file\n");
	}
	else if(ret==6)
	{
		printf("Bytes received %d",ret);
	}
	getchar();
//	write(1,buff,6);
	return 0;
}
