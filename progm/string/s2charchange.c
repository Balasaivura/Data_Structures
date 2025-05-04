#include<stdio.h>
#include<string.h>
char *strrev(char *s2);
int main()
{
	char s1[20],s2[20];
	gets(s1);gets(s2);
	char *ptr;
	int l2=strlen(s2);
	for(ptr=s1;ptr=strstr(ptr,s2);ptr+=l2)
        {
		strncpy(ptr,strrev(s2),l2);
		strrev(s2);
		//strrev(ptr,s2);
        }
	printf("%s\n",s1);
}


char *strrev(char *s2)
{
	static char s3[10];
	int n,i,j;
	n=strlen(s2);
	j=0;
	for(i=0;i<n;i++)
	{
		s3[i]=s2[j++]^32;
	}
	return s3;
}
