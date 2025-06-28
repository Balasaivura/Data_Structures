#include<stdio.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<unistd.h>
#include<fcntl.h>
#include<strings.h>
#include<string.h>
void main()
{
	int fd,a[5],i;
	close(0);//stdin closed
	fd=open("data.txt",O_RDONLY);
	if(fd<0)
	{
		perror("open");
		return;
	}
	for(i=0;i<6;scanf("%c",&a[i]),i++);
	for(i=0;i<6;i++)
	printf("%c",a[i]);
	printf("\n");
	close(fd);
}
