#include<stdio.h>
#include<unistd.h>
#include<signal.h>
void myHandler(int sigtype)
{
	int i,j;
	printf("I am in sig Handler\n");
	for(i=1;i<100000;i++)
		for(j=1;j<9000;j++);
	for(i=1;i<100000;i++)
		for(j=1;j<9000;j++);
	for(i=1;i<100000;i++)
		for(j=1;j<9000;j++);
	for(i=1;i<100000;i++)
		for(j=1;j<9000;j++);
	for(i=1;i<100000;i++)
		for(j=1;j<9000;j++);
	printf("I am exiting from the Handler\n");
}
int main()
{
	struct sigaction s;
	s.sa_handler=myHandler;
	sigemptyset(&s.sa_mask);
	sigaddset(&s.sa_mask,SIGQUIT);
	s.sa_flags=0;
	sigaction(SIGINT,&s,NULL);
	while(1);
}
