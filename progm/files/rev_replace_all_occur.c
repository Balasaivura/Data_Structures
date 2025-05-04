//replace substr reverse at all occurance
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void substrrev(char *,char *);
void replacesubstrinfile(char *,char *,char *);
int main(int argc,char *argv[])
{
	char rev[50];
	if(argc!=3)
	{
		printf("Incorrect inputs\n");
		printf("Exe Substr Filename\n");
		exit(0);
	}
	substrrev(argv[1],rev);
	replacesubstrinfile(argv[1],argv[2],rev);
}
void substrrev(char *s,char *r)
{
	int i,j;
	for(i=0,j=strlen(s)-1;j>=0;i++,j--)
	{
		r[i]=s[j];
	}
	r[i]='\0';
}
void replacesubstrinfile(char *substr,char *filename,char *revstr)
{
	FILE *fp;
	int len=strlen(revstr);
	char str[100];
	fp=fopen(filename,"r+");
	char *p=NULL;
	if(fp==NULL)
	{
		printf("%s file is not found\n",filename);
		exit(0);
	}
	while(fgets(str,100,fp))
	{
		p=str;
		while(p=strstr(p,substr))
		{
			strncpy(p,revstr,len);
			p=p+len;
		}
		fseek(fp,-strlen(str),1);
		fputs(str,fp);
	}
	fclose(fp);
}
