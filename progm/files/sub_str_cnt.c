#include<stdio.h>
#include<stdlib.h>
#include<string.h>
long searchsubstrinfile(char *,char *);
int main(int argc,char *argv[])
{
	if(argc!=3)
	{
		printf("Incorrect format\n");
		printf("Exe Substring Filename\n");
		exit(0);
	}
	long cnt=searchsubstrinfile(argv[1],argv[2]);
	printf("%s is occured %ld times\n",argv[1],cnt);
}
long searchsubstrinfile(char *substr,char *filename)
{
	long cnt=0;
	FILE *fp;
	char line[100];
	char *p;
	fp=fopen(filename,"r");
	if(fp==NULL)
	{
		printf("%s file is not found\n",filename);
		exit(0);
	}
	while(fgets(line,100,fp))
	{
		p=line;
		while(p=strstr(p,substr))
		{
			cnt++;
			p=p+strlen(substr);
		}
	}
	return cnt;
}
