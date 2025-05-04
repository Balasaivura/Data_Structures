#include<stdio.h>
#include<string.h>
int main()
{
	char s1[40],*ptr,ch=' ';
	fgets(s1,40,stdin);
	int n;
	n=strlen(s1);
	if(s1[n-1]=='\n')
		s1[n-1]='\0';
	n=strlen(s1);
	for(ptr=s1;
