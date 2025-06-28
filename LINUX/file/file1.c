#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>
#include<string.h>
int main(int argc,char *argv[])
{
	int fd;
	fd=open(argv[1],O_RDWR|O_CREAT,0660);
	printf("%d\n",fd);
	if(fd<0)
	{
		perror("open:");
		return 0;
	}
	char a[]="INDIA",ret;
	ret=write(fd,a,strlen(a)+1);
	if(ret==-1)
	{
		perror("wirte:");
		return 0;
	}
	else if(ret<(strlen(a)+1))
	{
		printf("failed to write all the bytes:\n");
		return 0;
	}
	printf("writing successful\n");
	lseek(fd,0,SEEK_SET);
	char b[10],i=0,ch;
	do{
		if(read(fd,&ch,1)==1)
		{
			b[i]=ch;
		}
		else
		{
			perror("read:");
			return 0;
		}
	}while(b[i++]!='\0');
		printf("read successful and data is:%s \n",b);
		close(fd);
}
