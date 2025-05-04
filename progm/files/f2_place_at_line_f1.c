#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cnt1,cnt2;
int flag;
int main(int argc,char *argv[])
{
	char (*lines1)[100]=NULL;
	char (*lines2)[100]=NULL;
	if(argc!=4)
	{
		printf("Inavalid input\n");
		printf("Exe Lineno File1 File2\n");
		exit(0);
	}
	lines1=readfromfile(argv[2]);
	lines2=readfromfile(argv[3]);
	lines1=insertlines(lines1,lines2,atoi(argv[0]));
	writetofile(lines1,argv[2]);
}
void *readfromfile(char *filename)
{
	FILE *fp;
	char *p=NULL;
	char str[100];
	fp=fopen(filename,"r");
	if(fp==NULL)
	{
		printf("%s file not found\n",filename);
		exit(0);
	}
	while(fgets(str,100,fp))
	{
		p=realloc(p,(cnt+1)*100);
		strcpy(p[cnt],str);
		if(flag==0)
		{
			cnt1++;
		}
		else
		{
			cnt2++;
		}
	}
	fclose(fp);
	return p;
}
void writetofile(char (*lines)[100],char *filename)
{
	FILE *fp;
	int i;
	fp=fopen(filename,"w");
	for(i=0;i<cnt1;i++)
	{
		fputs(lines[i],fp);
	}
	fclose(fp);
}
void *insertlines(char (*lines1)[100],char (*lines2)[100],int lineno)
{
	if(lineno<1||lineno>cnt1)
	{
		printf("Invalid line number\n");
		exit(0);
	}
	lineno--;
	lines1=realloc(lines1,(cnt1+cnt2)*100);
	strncpy(lines1+lineno,
	
