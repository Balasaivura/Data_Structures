#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void removesubstrinfile(char *,char *);
int main(int argc,char *argv[])
{
	char rev[50];
	if(argc!=3)
	{
		printf("Incorrect inputs\n");
		printf("Exe Substr Filename\n");
		exit(0);
	}
	removesubstrinfile(argv[1],argv[2]);
}
void removesubstrinfile(char *substr,char *filename)
{
	FILE *fp;
	char str[100];
	int len=strlen(substr);
	int len2;
	fp=fopen(filename,"r+");
	char *p;
	if(fp==NULL)
	{
		printf("%s file is not found\n",filename);
		exit(0);
	}
	while(fgets(str,100,fp))
	{
		p=str;
		len2=strlen(str);
		while((p=strstr(p,substr))!=NULL)
		{
			memmove(p,p+len,len2-(p-str)-len+1);
			len2=len2-len;
		}
		fseek(fp,-strlen(str),1);
		fputs(str,fp);
	}
	fclose(fp);
}
