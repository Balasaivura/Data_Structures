#include<stdio.h>
#include<signal.h>
#include<unistd.h>
void myHandler(int signum)
{
	printf("I am in ISR\n");
}
int main()
{
	printf("I am in main entry point\n");
	sleep(10);
	printf("sleep is over\n");
//	signal(SIGINT,myHandler);
	printf("Hello world\n");
//	sleep(10);
	kill(getpid(),SIGINT);
	//kill(getpid(),SIGSTOP);
	while(1);
}
