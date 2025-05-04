//delete paticular line in file
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void writetofile(char (*lines)[100],char *filename);
void *readfromfile(char *filename);
void *deleteline(char (*p)[100],int lineno);
int cnt;
int main(int argc,char *argv[])
{
	char (*lines)[100]=NULL;
	if(argc!=3)
	{
		printf("Incorrect inputs\n");
		printf("Exe filename Lineno\n");
		exit(0);
	}
	lines=readfromfile(argv[1]);
	lines=deleteline(lines,atoi(argv[2]));
	writetofile(lines,argv[1]);
}
void *readfromfile(char *filename)
{
	FILE *fp;
	char str[100];
	char (*p)[100]=NULL;
	fp=fopen(filename,"r");
	if(fp==NULL)
	{
		printf("%s file not found",filename);
		exit(0);
	}
	while(fgets(str,100,fp))
	{
		p=realloc(p,(cnt+1)*100);
		strcpy(p[cnt],str);
		cnt++;
	}
	fclose(fp);
	return p;
}
void *deleteline(char (*p)[100],int lineno)
{
	if(lineno<1||lineno>cnt)
	{
		printf("Invalid line number\n");
		exit(0);
	}
	lineno--;//in file lineno is n in array it will be n-1
	memmove(p+lineno,p+lineno+1,(cnt-lineno-1)*100);
	cnt--;
	p=realloc(p,cnt*100);
	return p;
}
void writetofile(char (*lines)[100],char *filename)
{
	FILE *fp;
	int i=0;
	fp=fopen(filename,"w");
	for(i=0;i<cnt;i++)
	{
		fputs(lines[i],fp);
	}
	//fwrite(lines,100,cnt,fp);
	fclose(fp);
}
