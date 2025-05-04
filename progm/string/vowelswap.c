#include<stdio.h>
#include<string.h>
int locatefirstvowel(char *);
int locatelastvowel(char *);
int isvowel(char);
void main()
{
	int first,last,temp;
	char str[20];
	gets(str);
	first=locatefirstvowel(str);
	if(first>=0)
		last=locatelastvowel(str);
	if(first<0)
		printf("Error");
	else
	{
		temp=str[first];
		str[first]=str[last];
		str[last]=temp;
		}
	printf("%s\n",str);
}
int locatefirstvowel(char *ptr)
{
	int i;
	for(i=0;ptr[i];i++)
	{
		if(isvowel(ptr[i]))
			return i;
	}
	return -1;
}
int locatelastvowel(char *ptr)
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
