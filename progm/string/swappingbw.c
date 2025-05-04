#include<stdio.h>
#include<string.h>
int *firstvowel(char *);
int *lastvowel(char *);
int isvowel(char);
int main()
{
	char a[20],temp;
	int n,i,j;
	int *s,*e;
	n=strlen(a);
	gets(a);
	s=firstvowel(a);
	printf("%d ",s);
	e=lastvowel(a);
	printf("%d ",e);
	char *p,*q;
	for(p=s,q=e;p<q;p++,q--)
	{
		temp=*p;
		*p=*q;
		*q=temp;
	}
}
int *firstvowel(char *a)
{
	int i;
	for(i=0;a[i];i++)
	{
		if(isvowel(a[i]))
			return i;
	}
	//return -1;
}
int *lastvowel(char *a)
{
	int i;
	int n=strlen(a)-1;
	for(i=n;i>=0;i--)
	{
		if(isvowel(a[i]))
			return i;
	}
	//return -1;
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
