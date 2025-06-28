#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main(int argc,char *argv[])
{
	int fd;
	//close(0);
	fd=open(argv[1],O_RDWR|O_CREAT,0660);
	printf("%d\n",fd);
	if(fd<0)
	{
		perror("open:");
		return 0;
	}
	write(fd,"ABCDEFG\n",9);
}
