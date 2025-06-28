#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
void main(int argc,char *argv[])
{
	struct stat v;
	if(argc!=2)
	{
		printf("Usage:./a.out filename\n");
		return;
	}
	if(stat(argv[1],&v)<0)
	{
		perror("Stat:");
		return;
	}
	printf("%ld\t %d\t %ld\t %o\t %d\t %ld\t \n",v.st_ino,v.st_mode,v.st_nlink,v.st_uid,v.st_gid,v.st_size);
}
