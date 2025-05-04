#include<stdio.h>
#include<string.h>
void sort(char *,int);
int main()
{
	char s1[100],s2[100];
	int n1,n2,flag=0,flag1=0,i,j;
	fgets(s1,100,stdin);
	fgets(s2,100,stdin);
	if(s1[strlen(s1)-1]=='\n')
		s1[strlen(s1)-1]='\0';
	if(s2[strlen(s2)-1]=='\n')
                s2[strlen(s2)-1]='\0';
	n1=strlen(s1);
	n2=strlen(s2);
	if(n1==n2)
	{
		sort(s1,n1);
		//printf("%s\n",s1);
		sort(s2,n2);
		//printf("%s\n",s2);
		if(strcmp(s1,s2)==0)
			printf("Anagram string\n");
		else
			printf("Not an anagram string\n");
	}
	else
                        printf("Not an anagram string\n");
}
void sort(char *p,int n)
{
	int i,j,flag;
        for(i=n-1;i>0;i--)
        {
                flag=0;
                for(j=0;j<i;j++)
                {
                        if(p[j]>p[j+1])
                        {
                                flag=1;
                                p[j]^=p[j+1]^=p[j]^=p[j+1];
                        }
                }
                if(flag==0)
                        break;
        }
}
	
