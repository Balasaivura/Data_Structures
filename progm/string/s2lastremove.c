#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char *locatelast(char *,char *);
int main()
{
	char *ptr;
	int l2;
	char s1[20],s2[20];
	gets(s1);gets(s2);
	l2=strlen(s2);
	ptr=locatelast(s1,s2);
	if(ptr==NULL)
	{
		printf("Not found\n");
		exit(0);
	}
	memmove(ptr,ptr+l2,strlen(ptr+l2)+1);
	printf("s1:%s\n",s1);
}
char *locatelast(char *str1,char *str2)
{
	char *found=NULL;
	while(str1=strstr(str1,str2))
	{
		found=str1;
		++str1;
	}
	return found;
}
