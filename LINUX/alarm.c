#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
#include<signal.h>
int main()
{
	int i;
	alarm(15);
	for(i=0;i<10;i++)
	{
		printf("Alarm:\n");
		sleep(2);
	}
}
