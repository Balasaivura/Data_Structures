#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char **locatewords(char *,int *);
char *getstring(void);
void replacenullwithspace(char *,int);
int main()
{
	char *str;
	char **arr;
	int len,n,i;
	printf("Enter the string\n");
	str=getstring();
	len=strlen(str);
	arr=locatewords(str,&n);
	replacenullwithspace(str,len);
	printf("str:%s\n",str);
	printf("words found at:");
	for(i=0;i<n;i++)
		printf("%ld ",arr[i]-str);
	printf("\n");
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

char **locatewords(char *p,int *q)
{
	int i=0;
	char **arr=NULL;
	while(p=strtok(p," "))
	{
		arr=(char**)realloc(arr,(i+1)*sizeof(char*));
		arr[i++]=p;
		p=NULL;
	}
	*q=i;
	return arr;
}

void replacenullwithspace(char *p,int n)
{
	int i;
	for(i=0;i<n;i++)
		if(p[i]=='\0')
			p[i]=' ';
}
