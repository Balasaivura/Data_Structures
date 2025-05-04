//cp command
#include<stdio.h>
#include<stdlib.h>
void writetofile(char *,char *);
char *readfromfile(char *);
long int size;
int main()
{
	char *buf;
	char srcfile[20],destfile[20];
	printf("Enter the source file\n");
	scanf("%s",srcfile);
	printf("Enter the destination file\n");
	scanf("%s",destfile);
	buf=readfromfile(srcfile);
	writetofile(destfile,buf);
}
char *readfromfile(char *filename)
{
	FILE *fp;
	char *p=NULL;
	fp=fopen(filename,"r");
	if(fp==NULL)
	{
		printf("%s file is not found\n",filename);
		exit(0);
	}
	fseek(fp,0,2);//taking control to end of the file
	size=ftell(fp);//finding current position
	rewind(fp);
	p=calloc(1,size);
	fread(p,size,1,fp);
	fclose(fp);
	return p;
}
void writetofile(char *filename,char *p)
{
	FILE *fp;
	fp=fopen(filename,"w");
	fwrite(p,size,1,fp);
	fclose(fp);
}
