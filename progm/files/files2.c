
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE *fp;
	char ch;
	char str[10];
	fgets(str,10,stdin);
	if(str[strlen(str)-1]=='\n')
		str[strlen(str)-1]='\0';
	fp=fopen(str,"r");
	if(fp==NULL)
	{
		printf("file not found\n");
		exit(0);
	}
	else
	{
		ch=fgetc(fp);
		printf("%c\n ",ch);
		ch=*fp->_IO_read_ptr;
		fp->_IO_read_ptr++;
		printf("%c\n ",ch);
		ch=*fp->_IO_read_ptr;
		fp->_IO_read_ptr++;
		printf("%c\n ",ch);
		ch=*fp->_IO_read_ptr;
		fp->_IO_read_ptr++;
		printf("%c\n ",ch);
	}
}
