#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<signal.h>
#include<sys/types.h>

void main()
{
	int pid;
	signal(SIGINT,SIG_IGN);
	signal(SIGFPE,SIG_IGN);
	pid=getpid();
	//pid=pid/0;
	printf("I am in main pid=%d \n",getpid());
	while(1);
}
