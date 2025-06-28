#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	int i;
	for(i=0;i<100;i++)
	{
		system("clear");
		printf("i=%d\n",i);
		sleep(1);
	}
}
