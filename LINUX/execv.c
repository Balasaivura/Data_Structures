#include<stdio.h>
#include<unistd.h>
int main()
{
	char *argv[]={"VECTOR","INDIA",NULL};
	printf("PID=%d PPID=%d\n",getpid(),getppid());
	execv("exe",argv);
	printf("I am back to prev exe\n");
}
