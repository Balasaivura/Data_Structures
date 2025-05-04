#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],s2[10];
	int cnt=0,l2;
	gets(s1);
	gets(s2);
	l2=strlen(s2);
	char *ptr;
	for(ptr=s1;ptr=strstr(ptr,s2);ptr+=l2)
	{
		cnt++;
	}
	printf("cnt=%d\n",cnt);
}

