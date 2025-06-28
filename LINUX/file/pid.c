#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
void main()
{
	int fd;
	printf("pid=%d\n",getpid());
	fd=open("data.txt",O_RDONLY);
	if(fd<0)
	{
		perror("open");
		return;
	}
	printf("fd=%d\n",fd);
	printf("pid=%d\n",getpid());
	while(1);
}
