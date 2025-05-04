#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void insertlines(char *file1,char *file2,int lineno);
int main(int argc,char *argv[])
{
	if(argc!=4)
	{
		printf("Inavalid input\n");
		printf("Exe file1 file2 lineno\n");
		exit(0);
	}
	insertlines(argv[1],argv[2],atoi(argv[3]));
}
void insertlines(char *file1,char *file2,int lineno)
{
	FILE *fp1,*fp2,*temp;
	fp1=fopen(file1,"r");
	fp2=fopen(file2,"r");
	temp=fopen("temp.txt","w");
	char buf[100];
	int cline=1;
	while(fgets(buf,100,fp1))
	{
		if(cline==lineno)
		{
			while(fgets(buf,100,fp2))
			{
				fputs(buf,temp);
			}
		}
		fputs(buf,temp);
		cline++;
	}
	fclose(fp1);
	fclose(fp2);
	fclose(temp);
	remove(file1);
	rename("temp.txt",file1);
}
