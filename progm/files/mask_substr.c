#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void masksubstrinfile(char *,char *);
int main(int argc,char *argv[])
{
	if(argc!=3)
	{
		printf("Incorrect input\n");
		printf("Exe filename\n");
		exit(0);
	}
	masksubstrinfile(argv[1],argv[2]);
}
void masksubstrinfile(char *substr,char *filename)
{
	FILE *fp;
	char str[100];
	int len=strlen(substr);
	fp=fopen(filename,"r+");
	char *p=NULL;
	if(fp==NULL)
	{
		printf("%s file is not found\n",filename);
		exit(0);
	}
	while(fgets(str,100,fp))
	{
		p=str;
		while(p=strstr(p,substr))
		{
			memset(p,'*',len);
			p=p+len;
		}
		fseek(fp,-strlen(str),1);
		fputs(str,fp);
	}
	fclose(fp);
}
