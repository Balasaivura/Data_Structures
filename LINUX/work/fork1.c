#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
int main()
{
	int ret,n,t,status,temp;
	srand(getpid());
	printf("Enter the number of time");
	scanf("%d",&n);
	ret=fork();
	if(ret==-1)
	{
		perror("fork");
	}
	if(ret)
	{
		temp=n;
		printf("PID: %d PPID: %d\n",getpid(),getppid());
		while(n)
		{
			wait(&ret);
			ret=fork();
			t=rand()%10;		
			sleep(t);
			if(ret==0)
			{
				printf("PID: %d PPID: %d\n",getpid(),getppid());
				printf("%d\n",t);
				exit(t);
			}
			n--;
		}
	}
	while(temp)
	{
		int cpid;
		cpid=wait(&status);
		printf("%d\t",status>>0);
		printf("%d\n",cpid);
		temp--;
	}

}

