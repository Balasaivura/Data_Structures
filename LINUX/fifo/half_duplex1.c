#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<fcntl.h>
#include<string.h>

int main()
{
	int fdr,fdw;
	char a[100],b[100];
	mkfifo("fifohd1",0660);
	perror("mkfifo1");
	mkfifo("fifohd2",0660);
	perror("mkfifo2");
	fdr=open("fifohd1",O_RDWR);
	fdw=open("fifohd2",O_RDWR);
	while(1)
	{
		printf("Enter the data");
		scanf("%s",a);

		write(fdw,a,strlen(a)+1);
		bzero(b,sizeof(b));
		read(fdr,b,sizeof(b));
		printf("%s\n",b);
	}
}

