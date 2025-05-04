#include<stdio.h>
#include<stdlib.h>
char *getstring(void);
int main()
{
	char *str;
	printf("Enter string:\n");
	str=getstring();
	printf("you supplied:%s\n",str);
	return 0;
}
char *getstring(void)
{
	char *p=NULL;
	int i=0;
	do{
		p=realloc(p,i+1);
		p[i]=getchar();
	}while(p[i++]!='\n');
	p[i-1]='\0';
	return p;
}
