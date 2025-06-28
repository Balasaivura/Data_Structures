#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<signal.h>
void myHandler(int sigtype)
{
	printf("I am in the SIGALRM Handler\n");
}
void main()
{
	signal(SIGALRM,SIG_DFL);
	//signal(SIGALRM,SIG_IGN);
	//signal(SIGALRM,myHandler);
	alarm(1);
	alarm(10);
	//while(1);
	int i;
	for(i=0;i<10;i++)
	{
		printf("i=%d\n",i);
		sleep(1);
	}
}
