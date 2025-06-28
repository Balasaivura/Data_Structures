#include<stdio.h>
#include<unistd.h>
int main()
{
/*	printf("I am in main\n");
	alarm(15);
	printf("Alarm is set for 15 secs\n");
	while(1);*/
	int i;
	//alarm(1);
	alarm(10);
	for(i=0;i<10;i++)
	{
		printf("%d\n",i);
		sleep(1);
	}
}
