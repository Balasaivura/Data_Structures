//sort lines in a file
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void writetofile(char (*lines)[100],char *filename);
void *readfromfile(char *filename);
void sortlines(char (*p)[100]);
int cnt;
int main(int argc,char *argv[])
{
	char (*lines)[100]=NULL;
	if(argc!=2)
	{
		printf("Incorrect inputs\n");
		printf("Exe filename\n");
		exit(0);
	}
	lines=readfromfile(argv[1]);
	sortlines(lines);
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
void sortlines(char (*p)[100])
{
	int i,j;
	char temp[100];
	for(i=1;i<cnt;i++)
	{
		for(j=0;j<cnt-1;j++)
		{
			if(strlen(p[j])>strlen(p[j+1]))
			{
				strcpy(temp,p[j]);
				strcpy(p[j],p[j+1]);
				strcpy(p[j+1],temp);
			}
		}
	}
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
