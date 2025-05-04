#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void replace(char *);
int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		printf("Incorrect input\n");
		printf("Exe filename\n");
		exit(0);
	}
	replace(argv[1]);
}
void replace(char *filename)
{
	char *q;
	FILE *fp;
	char str[100];
	fp=fopen(filename,"r+");
	if(fp==NULL)
	{
		printf("%s is file not found\n",filename);
		exit(0);
	}
	while(fgets(str,100,fp))
	{
		q=str;
		while(*q!='\0')
		{
			if(*q>='a'&&*q<='z')
			{
			*q^=32;
			}
			q++;
		}
		fseek(fp,-strlen(str),1);
		fputs(str,fp);
	}
	fclose(fp);
}
