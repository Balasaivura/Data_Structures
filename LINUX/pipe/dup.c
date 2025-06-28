#include<stdio.h>
#include<unistd.h>
int main()
{
	int fd;
	fd=dup(1);
	printf("fd=%d\n",fd);
	write(fd,"Hello",5);
}
