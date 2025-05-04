#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void reverseline(char *);
void reverselinesinfile(char *);
int main(int cnt,char *vec[])
{
	if(cnt!=2)
	{
		printf("Incorrect inputs\n");
		printf("Exe Filename\n");
		exit(0);
	}
	reverselinesinfile(vec[1]);
}
void reverselinesinfile(char *filename)
{
	FILE *fp;
	char line[100];
	fp=fopen(filename,"r+");
	if(fp==NULL)
	{
		printf("%s file not found\n",filename);
		exit(0);
	}
	while(fgets(line,100,fp))
	{
		reverseline(line);
		fseek(fp,-strlen(line),1);
		fputs(line,fp);
	}
	fclose(fp);
}
void reverseline(char *p)
{
	char ch;
	int i,j=strlen(p)-2;
	for(i=0,j;i<j;i++,j--)
	{
		ch=p[i];
		p[i]=p[j];
		p[j]=ch;
	}
}
