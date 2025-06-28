#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<signal.h>
int g=0;
void mysigHandler1(int signum)
{
	g++;
	printf("I am in the SIGINT ISR g=%d\n",g);
	//sleep(3);
}
int main()
{
	int pid;
	pid=fork();
	if(pid<0)
	{
		perror("fork");
		exit(0);
	}
	if(pid==0)
	{
		printf("In child process\n");
		signal(SIGINT,mysigHandler1);
		while(1);
	}
	else
	{
		int i;
		printf("Sending SIGINT signal \n");
		sleep(1);
		kill(pid,SIGINT);
		while(1);
	}
}
