#include<stdio.h>
#include<signal.h>
#include<unistd.h>
void myHandler(int sigtype)
{
	/* error handling */
}
int main(void)
{
	if(fork()==0)
	{
		/* child process */
		printf("In child process..c_pid:%d and p_pid:%d\n",getpid(),getppid());
		sleep(5);
		printf("sleep over .. now exiting\n");
	}
	else
	{
		/* parent process */
		struct sigaction v;
		v.sa_handler=myHandler;
		/* set the handler to ISR */
		v.sa_flags=SA_NOCLDWAIT;
		/* it will not let child to become zombie */
		//v.sa_flags=0;
		sigemptyset(&v.sa_mask);
		sigaction(17,&v,NULL);
		while(1);
	}
	return 0;
}
