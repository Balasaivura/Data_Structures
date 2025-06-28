#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<unistd.h>
#include<fcntl.h>
#include<strings.h>
#include<string.h>
void main(int argc,char *argv[])
{
	int fd,fd1,ret;
	char a[10];
	if(argc!=3)
	{
		printf("Usage:./My_copy srcfile destfile\n");
		return;
	}
	fd=open(argv[1],O_RDONLY);
	if(fd<0)
	{
		perror("openSRC:");
		return;
	}
	fd1=open(argv[2],O_WRONLY|O_CREAT|O_TRUNC,0660);
	if(fd1<0)
	{
		perror("openDEST:");
		return;
	}
	do{
		memset(a,'\0',sizeof(a));
		ret=read(fd,a,6);
		write(fd1,a,ret);
	}
	while(ret);
	close(fd);
	close(fd1);
}


