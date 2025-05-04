#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void writetofile(char (*lines)[100],char *filename);
void *readfromfile(char *filename);
void *deletelines(char (*p)[100],int min,int max);
int cnt;
int main(int argc,char *argv[])
{
	char (*lines)[100]=NULL;
	if(argc!=4)
	{
		printf("Incorrect inputs\n");
		printf("Exe filename Lineno\n");
		exit(0);
	}
	lines=readfromfile(argv[1]);
	lines=deletelines(lines,atoi(argv[2]),atoi(argv[3]));
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
void *deletelines(char (*p)[100],int min,int max)
{
	int range=(max-min)+1;
	if((min<1||min>cnt)&&(max<1||max>cnt))
	{
		printf("Invalid line number\n");
		exit(0);
	}
	min--;max--;//in file lineno iis n in array it will be n-1
	memmove(p+min,p+max+1,(range)*100);
	cnt=cnt-range;
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
