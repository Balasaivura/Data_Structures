#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int isvowel(char);
int main()
{
        char *ptr;
        int n,cnt=0;
        char s1[100];
        char ch='*';
        gets(s1);
	n=strlen(s1);
	for(ptr=s1;*ptr;ptr++)
	{
		if(isvowel(*ptr))
		{
			if(isvowel(*(ptr+1)))
			{
				cnt++;
                		memset(ptr,ch,2);
			}
		}
	}
	if(cnt==0)
		printf("no conjugative vowels found\n");
	else
        	printf("s1:%s\n",s1);
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


