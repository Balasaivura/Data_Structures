#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<dirent.h>
int main(int argc,char *argv[])
{
	struct DIR *d;
	struct dirent *r;
	d=opendir(argv[1]);
	if(d==NULL)
	{
		perror("opendir");
	}
        while((r=readdir(d)))
	{
		printf("%ld\t %s\n",r->d_ino,r->d_name);
	}
	closedir(d);
}	
