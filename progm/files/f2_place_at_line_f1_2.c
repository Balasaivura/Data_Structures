#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *readfromfile(char *filename);
int main(int argc,char *argv[])
{
	char *buf1=NULL,*buf2=NULL,a;
	int l1,l2;
	if(argc!=4)
	{
		printf("Incorrect input\n");
		printf("Exe file1 file2 lineno\n");
		exit(0);
	}
	buf1=readfromfile(argv[1]);
	buf2=readfromfile(argv[2]);
	a=atoi(argv[3]);
	l1=strlen(buf1);
	l2=strlen(buf2);
	buf1=realloc(buf1,l2+l1+1);
	memmove(buf1+l2+a,buf1+a,strlen(buf1+a)+1);
	memmove(buf1+a,buf2,l2);
	FILE *fp;
	fp=fopen(argv[1],"w");
	fputs(buf1,fp);
	fclose(fp);
}
char *readfromfile(char *filename)
{
	FILE *fp;
	char *p=NULL;
	fp=fopen(filename,"r");
	if(fp==NULL)
	{
		printf("%s file not found\n",filename);
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


