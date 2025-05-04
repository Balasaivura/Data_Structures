#include<stdio.h>
#include<string.h>
#include<ctype.h>
int checkwordvalid(char *);
int cntvowels(char *);
int isvowel(char);
void replacenullwithspace(char *,int);
int main()
{
	char str[40],*ptr;
	int i,n;
	printf("Enter the string\n");
	gets(str);
	n=strlen(str);
	char *last=NULL;
	ptr=str;
	while(ptr=strtok(ptr," "))
	{
		if(checkwordvalid(ptr))
			last=ptr;
		ptr=NULL;
	}
	if(last==NULL)
		printf("Error: no valid word found\n");
	else
		printf("vowel count in alst word:%d\n",cntvowels(last));
	replacenullwithspace(str,n);
	printf("str:%s\n",str);
}
int cntvowels(char *last)
{
	int i,n=strlen(last),cnt=0;
	for(i=0;i<n;i++)
		if(isvowel(last[i]))
			cnt++;
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
int checkwordvalid(char *p)
{
	while(*p)
	{
		if(isalpha(*p)==0)
			return 0;
		p++;
	}
	return 1;
}

void replacenullwithspace(char *str,int n)
{
	int i;
	for(i=0;i<n;i++)
		if(str[i]=='\0')
			str[i]=' ';
}




