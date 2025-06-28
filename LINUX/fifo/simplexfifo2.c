#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>
int main()
{
	int fd;
	char a[15];
	fd=open("fifofile",O_RDONLY);
	perror("open");
	while(1)
	{
		read(fd,a,sizeof(a));
		printf("%s\n",a);
	}
}
