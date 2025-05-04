#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int n;
	printf("enter the string\n");
	fgets(str,sizeof(str),stdin);
	n=strlen(str);
	if(str[n-1]=='\n')
		str[n-1]='\0';
	n=strlen(str);
	int i,j,count=0,flag=0;
	char *p=str;
	while(p=strtok(p," "))
	{
		flag=0;
		int l=strlen(p);
		for(i=0,j=l-1;i<j;i++,j--)
		{
			if(p[i]!=p[j])
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
			count++;
		p=NULL;
	}
	printf("%d number of palindromes present\n",count);
}
