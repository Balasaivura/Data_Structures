#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int isvowel(char);
int main()
{
	FILE *fp;
	int cnt=0;
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
		while((ch=fgetc(fp))!=EOF)
		{
			if(isvowel(ch)==1)
				cnt++;
		}
	       fclose(fp);
	       printf("%d\n",cnt);
	}
}	
int isvowel(char ch)
{
	switch(ch)
	{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':return 1;
	}
	return 0;
}
