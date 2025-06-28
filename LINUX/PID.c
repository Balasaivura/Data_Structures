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
		printf("Parent process: \n");
		printf("PID =%d PPID=%d\n",getpid(),getppid());
	}
	else
	{
		//exclusive Child process
		printf("Child process: \n");
		sleep(10);
		printf("PID =%d PPID=%d\n",getpid(),getppid());
	}
}
