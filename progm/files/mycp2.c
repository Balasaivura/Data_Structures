#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	char str[100];
	FILE *fp1,*fp2;
	if(argc!=3)
	{
		printf("incorrect inputs\n");
		printf("exe sourcefile destinationfile\n");
		exit(0);
	}
	fp1=fopen(argv[1],"r");
	if(fp1==NULL)
	{
		printf("%s is not found\n",argv[1]);
		exit(0);
	}
	fp2=fopen(argv[2],"w");
	while(fgets(str,100,fp1))
	{
		fputs(str,fp2);
	}
	fclose(fp1);
	fclose(fp2);
}
			
