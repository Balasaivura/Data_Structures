#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	char ch;
	FILE *fp1,*fp2;
	if(argc!=3)
	{
		printf("in-correct input\n");
		printf("exe sourcefile destionation file\n");
		exit(0);
	}
	fp1=fopen(argv[1],"r");
	if(fp1==NULL)
	{
		printf("%s is not found\n",argv[1]);
		exit(0);
	}
	fp2=fopen(argv[2],"w");
	while((ch=fgetc(fp1))!=EOF)
		fputc(ch,fp2);
	fclose(fp1);
	fclose(fp2);
}
