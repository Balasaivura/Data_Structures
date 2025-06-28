#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<unistd.h>
#include<fcntl.h>
#include<strings.h>
#include<string.h>
void main()
{
	int fd,ret;
	char a[10];
	bzero(a,sizeof(a));
	printf("a=%s\n",a);
	fd=open("data.txt",O_RDONLY);
	if(fd<0)
	{
		perror("open");
		return;
	}
	printf("fd=%d\n",fd);
	ret=read(fd,a,6);
	perror("read");
	memset(a,'i',3);
	printf("ret=%d\n",ret);
	printf("%s",a);
}
