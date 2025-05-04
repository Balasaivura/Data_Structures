//wc command
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
long search(char *,char);
char *readfromfile(char *);
int main(int argc,char *argv[])
{
	long ccnt=0,wcnt=0,lcnt=0;
	char *buf;
	buf=readfromfile(argv[1]);
	ccnt=strlen(buf);
	/** counting no of lines **/
	lcnt=search(buf,10);//search(buf,'\n');
	/** counting no of words **/
	wcnt=search(buf,32);
	printf("%ld %ld %ld %s\n",lcnt,wcnt+lcnt,ccnt,argv[1]);
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
	fseek(fp,0,2);//taking to end of the file
	long int size=ftell(fp);
	rewind(fp);
	p=calloc(1,size+1);
	fread(p,size,1,fp);
	p[size]='\0';
	fclose(fp);
	return p;
}
long search(char *p,char ch)
{
	long cnt=0;
	char *q;
	q=p;
	while(q=strchr(q,ch))
	{
		cnt++;
		q++;
	}
	return cnt;
}
