#include<stdio.h>
#include<unistd.h>
int main()
{
	int ret;
	ret=fork();
	if(ret==-1)
	{
		perror("fork");
		return 0;
	}
	if(ret)
	{
		//exclusive parent process
		printf("PID=%d PPId=%d\n",getpid(),getppid());
		sleep(30);
		printf("Parent Process is exiting\n");
	}
	else
	{
		//exclusive child process
		printf("PID=%d PPID=%d\n",getpid(),getppid());
	}
}
