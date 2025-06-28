#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include <sys/wait.h>

void cmdcheck(char *);

int main()
{
	char username[20],password[20],argv[20];
l1:	printf("Enter the Username: ");
	scanf("%s",username);
	printf("Enter the password: ");
	scanf("%s",password);
	if(strcmp("v24he2v8",username)||strcmp("123",password))
	{
		printf("Inavlid cedintials:");
		goto l1;
	}
	else
	{
		while(1)
		{	
			printf("Enter the command: ");
			scanf("%s",argv);
			if(strcmp("help",argv)==0)
			{
				printf("You enter the help command:");
			}
			else if(strcmp("exit",argv)==0)
			{
				exit(0);
			}
			else
			{
				cmdcheck(argv);
			}
		}
	}
}
void cmdcheck(char *argv)
{
	char *args[20];
	int i=0;
	char *token=strtok(argv," ");
	while(token!=NULL)
	{
		args[i++]=token;
		token=strtok(NULL," ");
	}
	args[i]=NULL;
	if(fork()==0)
	{
		execlp(args[0],args[0],args[1],NULL);
	}
	else
		wait(NULL);
}
