#include<stdio.h>
#include<unistd.h>
#include<signal.h>
#include<string.h>
void myisr(int n)
{
	printf("in ISR %d... %s\n",n,strsignal(n));
}
int main()
{
	int p[2],a=20;
	pipe(p);
	perror("pipe");
	signal(SIGPIPE,myisr);
	close(p[0]);
	write(p[1],&a,4);
	perror("write");
}
