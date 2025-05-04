#include<stdio.h>
#include<string.h>
int main()
{
	char str[40];
	char delim[10]=" ";
	char *ptr;
	int cnt=0,len,i;
	printf("Enter a string\n");
	gets(str);
	len=strlen(str);
	ptr=str;
	while(ptr=strtok(ptr,delim))
	{
		//printf("word: %d :%s\n",i,ptr);
		cnt++;
		ptr=NULL;
	}
	printf("count:%d\n",cnt);
	for(i=0;i<len;i++)
		if(str[i]=='\0')
			str[i]=' ';
	printf("str:%s\n",str);
	
}


