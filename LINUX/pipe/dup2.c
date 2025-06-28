#include<stdio.h>
#include<unistd.h>
int main()
{
	int p[2];
	pipe(p);
	if(fork()==0)
	{
		//child executes ls
		close(p[0]);
		close(1);
		dup(p[1]);
		execlp("ps","ps","-el",(char*)NULL);
	}
	else
	{
		if(fork()==0)
		{
			close(p[1]);
			dup2(p[0],0);
			execlp("grep","grep","pts/0",(char*)NULL);
		}
		else
		{
			close(p[0]);
			close(p[1]);
			wait(0);
			wait(0);
		}
	}
}
