#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
        char *ptr;
        int l2,cnt=0;
        char s1[20],s2[20];
	char ch='*';
        gets(s1);gets(s2);
        l2=strlen(s2);
	for(ptr=s1;ptr=strstr(ptr,s2);ptr+=l2)
        {
		cnt++;
		memset(ptr,ch,strlen(s2));
        	//memmove(ptr,ptr+l2,strlen(ptr+l2)+1);
	}
//	printf("%d\n",cnt);
        printf("s1:%s\n",s1);
}

