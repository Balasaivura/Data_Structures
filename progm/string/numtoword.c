#include<stdio.h>
#include<string.h>
#include<ctype.h>
char *numtoword(int);
int main()
{
        char s1[100],*ptr;
        int n,pos;
        fgets(s1,100,stdin);
        n=strlen(s1);
        if(s1[n-1]=='\n')
                s1[n-1]='\0';
        n=strlen(s1);
	for(i=0;i<n;i++)
	{
        	for(ptr=s1;*ptr;ptr++)
        	{
                	if(isdigit(*ptr))
                	{	
                        	strncpy(ptr,numtoword(*ptr),n);
                	}
        	}
        	printf("%s\n",s1);
}
char *numtoword(int n)

