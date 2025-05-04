//First last letter capital in every word in file
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void replace(char *filename,char ch);
int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		printf("Invalid input\n");
		printf("Exe Filename\n");
		exit(0);
	}
	replace(argv[1],32);
	replace(argv[1],10);
}
void replace(char *filename,char ch)
{
	FILE *fp;
	char str[100];
	char *p;
	fp=fopen(filename,"r+");
	if(fp==NULL)
	{
		printf("%s file not found\n",filename);
		exit(0);
	}
	while(fgets(str,100,fp))
	{
		p=str;
		if(*p>='a'&&*p<='z')
		{
			*p^=32;
		}
		while(p=strchr(p,ch))
		{
			if(*(p+1)>='a'&&*(p+1)<='z')
			{
				*(p+1)^=32;
			}
			if(*(p-1)>='a'&&*(p-1)<='z')
			{
				*(p-1)^=32;
			}
			p++;
		}
		fseek(fp,-strlen(str),1);
		fputs(str,fp);
	}
	fclose(fp);
}
