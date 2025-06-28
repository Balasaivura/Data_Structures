#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>
#include<fcntl.h>
#include<sys/stat.h>

#define BUF_SIZE 2048
#define FIFO_NAME "fifocpy"

void  writer(const char *source)
{
	char buf[BUF_SIZE];
	int src,fd;
	size_t size;

	src=open(source,O_RDONLY);
	if(src<0)
	{
		perror("OpenSrc:");
		exit(0);
	}
	fd=open(FIFO_NAME,O_WRONLY);
	if(fd<0)
	{
		perror("RD_Fifo:");
		exit(0);
	}
	while((size=read(src,buf,BUF_SIZE))>0)
	{
		write(fd,buf,size);
	}
	close(src);
	close(fd);
}
void  reader(const char *destination)
{
	char buf[BUF_SIZE];
	int dest,fd;
	size_t size;

	dest=open(destination,O_WRONLY|O_CREAT|O_TRUNC,0666);
	if(dest<0)
	{
		perror("OpenDest:");
		exit(0);
	}
	fd=open(FIFO_NAME,O_RDONLY);
	if(fd<0)
	{
		perror("WR_Fifo:");
		exit(0);
	}
	while((size=read(fd,buf,BUF_SIZE))>0)
	{
		write(dest,buf,size);
	}
	close(dest);
	close(fd);
}

int main(int argc,char *argv[])
{
	if(argc!=3)
	{
		printf(" ./mycpy src dest:\n");
		exit(0);
	}
	mkfifo(FIFO_NAME,0666);
	perror("mkfifo:");
	int ret=fork();
	if(ret<0)
	{
		perror("fork:");
		exit(0);
	}
	if(ret==0)
	{
		reader(argv[2]);
		//writer(argv[2]);
	}
	else
	{
		writer(argv[1]);
		//reader(argv[1]);
		wait(NULL);
	}
	return 0;
}
