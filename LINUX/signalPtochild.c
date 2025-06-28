#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<signal.h>
void mysigHandler1(int signum)
{
	printf("I am in SIGINT ISR\n");
	sleep(3);
}
void mysigHandler2(int signum)
{
	printf("I am in SIGQIT ISR\n");
	exit(0);
}
void main()
{
	int pid;
	pid=fork();
	if(pid==0)
	{
		signal(SIGINT,mysigHandler1);
		signal(SIGINT,mysigHandler2);
		printf("In child process\n");
		while(1);
	}
	else
	{
		int i;
		for(i=0;i<5;i++)
		{
			printf("Sending SIGINT signal\n");
			kill(pid,SIGINT);
			sleep(1);
		}
		sleep(10);
		printf("Sending SIGQUIT signal\n");
		kill(pid,SIGQUIT);
	}
}
