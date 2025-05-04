//replace substr with another substr in file
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *readfromfile(char *);
char *replacesubstr(char *,char *,char *);
void writetofile(char *,char *);
int main(int argc,char *argv[])
{
	char *buf;
	if(argc!=4)
	{
		printf("Invalid input\n");
		printf("Exe SubStr NewsubStr Filename\n");
		exit(0);
	}
	buf=readfromfile(argv[3]);
	buf=replacesubstr(buf,argv[1],argv[2]);
	writetofile(buf,argv[3]);
}
char *readfromfile(char *filename)
{
	FILE *fp;
	long size;
	char *p=NULL;
	fp=fopen(filename,"r");
	if(fp==NULL)
	{
		printf("%s file not found\n",filename);
		exit(0);
	}
	fseek(fp,0,2);
	size=ftell(fp);
	rewind(fp);
	p=realloc(p,size+1);
	fread(p,size,1,fp);
	p[size]='\0';
	fclose(fp);
	return p;
}
char *replacesubstr(char *str,char *substr,char *newstr)
{
	long l1,l2,i;
	l1=strlen(substr);
	l2=strlen(newstr);
	char *p;
	p=str;
	while(p=strstr(p,substr))
	{
		i=p-str;//finding index of substr in main str
		if(l2>l1)
		{
			//resize
			str=realloc(str,strlen(str)+1+(l2-l1));
			if(str+i!=p)
			{
				p=str+i;//if relocated, p is updated with new address
			}
			memmove(p+l2,p+l1,strlen(p+l1)+1);
		}
		else if(l2<l1)
		{
			memmove(p+l2,p+l1,strlen(p+l1)+1);
			str=realloc(str,strlen(str)+1+l2-l1);
		}
		strncpy(p,newstr,l2);
		p=p+l2;
	}
	return str;
}
void writetofile(char *p,char *filename)
{
	FILE *fp;
	fp=fopen(filename,"w");
	fwrite(p,strlen(p),1,fp);
	fclose(fp);
}
