#include<stdio.h>
#include<unistd.h>
int main()
{
	int ret;
	ret=fork();
	if(ret==-1)
	{
		perror("fork");
	//	exit(0);
	}
	if(ret)
	{
		printf("Parent process: ");
		printf("PID :%d	PPID:%d\n",getpid(),getppid());
	}
	else
	{
		printf("Child process: ");
		printf("PID:%d PPID:%d\n",getpid(),getppid());
	}
}
