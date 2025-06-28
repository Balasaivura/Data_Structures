#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
int main()
{
	int p1;
	int arr[2];
	p1=pipe(arr);
	if(p1==-1)
	{
		perror("pipe");
		return 0;
	}
	
	int ret=fork();
	if(ret==-1)
	{
		perror("fork");
		return 0;
	}
	if(ret)
	{

		printf("PID:%d\n",getpid());
		close(arr[0]);
		write(arr[1],"ABCDEF",7);
		wait(NULL);
	}
	else
	{

		int i =0;
		char ch,str[10]={0};
		bzero(str,sizeof(str));
		close(arr[1]);
		do{
			if(read(arr[0],&ch,1)==-1)
			{
				break;
			}
			str[i]=ch;
		//	putchar(ch);
		}while(str[i++]!='\0');
		printf("%s\n",str);
		exit(0);
	}
}

