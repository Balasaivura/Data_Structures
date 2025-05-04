#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void removesubstrinfile(char *,char *);
char *readfromfile(char *);
int main(int argc,char *argv[])
{	
	char *buf;
	FILE *fp;
	if(argc!=3)
	{
		printf("Incorrect inputs\n");
		printf("Exe Substr Filename\n");
		exit(0);
	}
	buf=readfromfile(argv[2]);
	removesubstrinfile(argv[1],buf);
	fp=fopen(argv[2],"w");
	fputs(buf,fp);
}
void removesubstrinfile(char *substr,char *buf)
{
	char str[100];
	int len=strlen(substr);
	char *p;
		p=buf;
		//int len2=strlen(str);
		while(p=strstr(p,substr))
		{
			memmove(p,p+len,strlen(p + len) + 1);
			p++;
		}
}
char *readfromfile(char *filename)
{
	char *p=NULL;
	FILE *fp;
	fp=fopen(filename,"r");
	if(fp==NULL)
	{
		printf("%s is not found\n",filename);
		exit(0);
	}
	fseek(fp,0,2);
	long size=ftell(fp);
	rewind(fp);
	p=realloc(p,size+1);
	fread(p,size,1,fp);
	p[size]='\0';
	fclose(fp);
	return p;
}

