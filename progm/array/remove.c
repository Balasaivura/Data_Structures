#include<stdio.h>
#include<string.h>
int isvowel(char);
int firstvowel(char *);
int lastvowel(char *);
int main()
{
	int p,q;
	char str[20];
	gets(str);
	p=firstvowel(str);
	if(p>=0)
		q=lastvowel(str);
	if(p<0)
		printf("Error");
	else
		memmove(str+p+1,str+q,strlen(str+q)+1);
	printf("str:%s\n",str);
}
int firstvowel(char *ptr)
{
	int i;
	for(i=0;ptr[i];i++)
	{
		if(isvowel(ptr[i]))
			return i;
	}
	return -1;
}
int lastvowel(char *ptr)
{
	int i,n;
	n=strlen(ptr)-1;
	for(i=n;i>=0;i--)
	{
		if(isvowel(ptr[i]))
			return i;
	}
	return -1;
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
		case 'u':
			return 1;
	}
	return 0;
}


