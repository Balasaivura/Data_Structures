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
	fdr=open("fifohd2",O_RDWR);
	fdw=open("fifohd1",O_RDWR);
	while(1)
	{
		bzero(b,sizeof(b));
		read(fdr,b,sizeof(b));
		printf("%s\n",b);
		printf("Enter the data:");
	//	printf("you..\n");
		scanf("%s",a);

		write(fdw,a,strlen(a)+1);
	}
}

