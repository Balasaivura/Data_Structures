//grep command
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cnt;
int main(int argc,char *argv[])
{
	char str[100];
	FILE *fp;
	if(argc!=3)
	{
		printf("Invalid input\n");
		printf("Exe Substr Filename\n");
		exit(0);
	}
	fp=fopen(argv[2],"r");
	while(fgets(str,100,fp))
	{
		cnt++;
		if(strstr(str,argv[1]))
		{
			printf("%d %s\n",cnt,str);
		}
	}
	fclose(fp);
}
