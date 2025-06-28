#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include <sys/wait.h>
/*int main()
{
	pid_t pid=fork();
	if(pid==0)
	{
		execlp("ls","ls","-l",(char*)NULL);
		printf("This will be printed\n");
	}
	else
	{
		wait(NULL);
		printf("parent process\n");
	}
	return 0;
}
int num = 5;
int main()
{
	pid_t pid = vfork();
    	if(pid == 0) 
    	{
       		 num += 5;
       		 printf("Child process: num = %d\n", num);
        	 exit(0);
    	} 
    	else 
	{
		num+=10;
	       	printf("Parent process: num = %d\n", num);
    	}
    return 0;
}*/
int main() {
        char *arg[]={"ps","-el",NULL};
    pid_t pid = fork();

    if (pid == 0) {
            execvp("ps",arg);
        printf("Child process");
    } else {
            wait(NULL);
            system("pwd");
        printf("Parent process");
    }

    return 0;
}
