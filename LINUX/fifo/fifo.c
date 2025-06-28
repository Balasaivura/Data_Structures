#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
int main()
{
	int f1,f2;
	char *s1;
	f1=mkfifo("fifo1",0666);
	if(f1==-1)
	{
		perror("fifo1");
	}
	f2=mkfifo("fifo2",0666);
	if(f2==-1)
	{
		perror("fifo2");
	}
	int fd1=open(f1,O_RDONLY);
	int fd2=open(f2,O_WRONLY);
	while(1)
	{
		fgets(s1,100,stdin);
		write(fd2,s1,strlen(s1)+1);
		printf("%s\n",s1);
	}

	close(fd1);
	close(fd2);
}
