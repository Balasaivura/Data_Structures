#include<stdio.h>
#include<unistd.h>
int main(int argc,char *argv[])
{
	printf("I am in new exe PID=%d PPID=%d\n",getpid(),getppid());
	printf("argc=%d argv[1]=%s\n",argc,argv[1]);
	printf("Exiting\n");
}
