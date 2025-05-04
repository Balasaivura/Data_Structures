#include<stdio.h>
#include<string.h>
void sort(char *,char); 
int main()
{
	char str[20],ch,*p,*q;
	gets(str);
	ch=getchar();
	p=strchr(str,ch);
	q=strrchr(str,ch);
	sort(p+1,q-p-1);
	printf("%s\n",str);
}
void sort(char *p,char n)
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


