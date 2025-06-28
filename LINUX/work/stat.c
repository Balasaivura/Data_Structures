#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<utime.h>
#include<time.h>
int main(int argc,char *argv[])
{
	struct stat buf;
	struct utimbuf t;
	if((stat(argv[1],&buf))==-1)
	{
		perror("stat:");
	}
	printf("actual time: %s\n",ctime(&buf.st_atime));
	t.actime=t.modtime=buf.st_mtime-(3600*24*30);
	if((utime(argv[1],&t))==-1)
	{
		perror("utime:");
	}
	printf("modification time: %s\n",ctime(&buf.st_atime));
}

