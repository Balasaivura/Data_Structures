#include<stdio.h>
#include<string.h>
int main()
{

        int i,m,n,pos;
        char s1[20];
        char s2[20];
	printf("string 1:");
        gets(s1);
	printf("string 2:");
        gets(s2);
        printf("Enter the position\n");
        scanf("%d",&pos);
        //m=strlen(s1)/2;
        //memmove(s1+pos+strlen(s2),s1+pos,strlen(s1+pos)+1);
        memmove(s2+strlen(s2),s1+pos,strlen(s1));
        //strncpy(s1+strlen(s1)/2,s2,strlen(s2));
        strcpy(s1+pos,s2);
	printf("s1:%s\n",s1);
}

