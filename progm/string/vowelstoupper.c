#include<stdio.h>
#include<ctype.h>
#include<string.h>
int isvowel(char);
int main()
{
	char s1[10];
	gets(s1);
	int i,n;
	n=strlen(s1);
	for(i=0;i<n;i++)
	{
		if(isalpha(s1[i]))
		{
			s1[i]=s1[i]^32;
		}
	}
	printf("%s\n",s1);
}
int isvowel(char ch)
{
	switch(ch)
	{
		//case 'A':
		//case 'E':
		//case 'I':
		//case 'O':
		//case 'U':
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':return 1;
	}
	return 0;
}
