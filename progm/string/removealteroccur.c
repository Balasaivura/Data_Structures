#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
        char *ptr;
        int l2,cnt=0;
        char s1[20],s2[20];
        gets(s1);gets(s2);
        l2=strlen(s2);
	for(ptr=s1;ptr=strstr(ptr,s2);ptr+=l2)
        {
		cnt++;
		if(cnt%2==0)
        		memmove(ptr,ptr+l2,strlen(ptr+l2)+1);
	}
	//printf("%d\n",cnt);
        printf("s1:%s\n",s1);
}

