#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>
#include<sys/wait.h>

#define BUF_SIZE 2048
int main(int argc,char *argv[])
{
	if(argc!=3)
	{
		printf("mycpy Src Dest\n");
		exit(0);
	}
	int p[2];
	pipe(p);
	perror("pipe");
	char buf[BUF_SIZE];
	//static char *buf2=NULL;
	if(fork()==0)
	{
		close(p[1]);
		int fd=open(argv[2],O_WRONLY|O_CREAT|O_TRUNC,0666);
		if(fd<0)
		{
			perror("openDest:");
			exit(0);
		}
	//	sleep(5);
		size_t size;
		while((size=read(p[0],buf,BUF_SIZE))>0){
		//printf("child read:%s ",buf);
		write(fd,buf,size);}
		close(p[0]);
		close(fd);

	}
	else
	{
		int fd2=open(argv[1],O_RDONLY);
		if(fd2<0)
		{
			perror("openSrc:");
			exit(0);
		}
		close(p[0]);
		size_t size;
		/*size=lseek(fd2,0,SEEK_END);
		lseek(fd2,0,SEEK_SET);
		buf1=calloc(1,size+1);*/
		while((size=read(fd2,buf,BUF_SIZE))>0){
		//printf("parent read:%s ",buf);
		write(p[1],buf,size);}
		close(p[1]);
		close(fd2);
		wait(NULL);
	}
	return 0;
}

		
