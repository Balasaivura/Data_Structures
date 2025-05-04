#include<stdio.h>
#include<string.h>
int vowelcount(char *,int);
int isvowel(char);
void replacenullwithspace(char *,int);
int main()
{
	char s1[100],*ptr,*p;
	int n,n1,n2,len,i,j,cnt=0,temp=99;
	fgets(s1,100,stdin);
	n=strlen(s1);
	if(s1[n-1]=='\n')
		s1[n-1]='\0';
	len=strlen(s1);
	for(ptr=s1;ptr=strtok(ptr," ");ptr=NULL)
	{
		n1=strlen(ptr);
		cnt=vowelcount(ptr,n1);
	//	printf("%d ",cnt);
		if(cnt<temp)
		{
			if(cnt!=0)
			{
				temp=cnt;
				p=ptr;
			}
		}
	}
	n2=strlen(p);
	for(i=0,j=n2-1;i<j;i++,j--)
	{
		p[i]^=p[j]^=p[i]^=p[j];
	}
	replacenullwithspace(s1,len);
	printf("%s\n",s1);

}
int vowelcount(char *s1,int n)
{
	int cnt=0,i;
	for(i=0;i<n;i++)
	{
		if(isvowel(s1[i])==1)
		{
			cnt++;
		}
	}
	return cnt;
}
int isvowel(char ch)
{
	switch(ch)
	{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U':
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':return 1;
	}
	return 0;
}
void replacenullwithspace(char *s1,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(s1[i]=='\0')
			s1[i]=' ';
	}
}
