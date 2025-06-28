#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
int main(int argc,char *argv[])
{
	struct stat v;
	if(stat(argv[1],&v)==-1)
	{
		perror("stat:");
		return 0;
	}
	printf("group=%d\n",v.st_gid);
	printf("size=%u\n",(unsigned int)v.st_size);
}
