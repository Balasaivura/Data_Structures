#include<stdio.h>
#include<string.h>
//void strrev(char *,char *);
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
/*void strrev(char *p,char *s2)
{
	int i,j;
        for(i=0,j=strlen(s2)-1;i<j;i++,j--)
        {
                char temp=p[i];
		p[i]=p[j];
		p[j]=temp;
        }
	// printf("%s\n",s2);
}
*/

char *strrev(char *s2)
{
	char *p,*q,temp;
	int n=strlen(s2);
        for(p=s2,q=((n-1)+s2);p<q;p++,q--)
        {
                temp=*p;
                *p=*q;
                *q=temp;
        }
	return s2;
}

