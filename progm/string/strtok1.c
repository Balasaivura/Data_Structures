#include<stdio.h>
#include<string.h>
int main()
{
	char str[40];
	char delim[10]=" ";
	char *ptr;
	printf("enter a string\n");
	gets(str);
	ptr=str;
	int i=0,n;
	n=strlen(str);
	while(ptr=strtok(ptr,delim))
	{
		printf("word:%d :%s\n",i,ptr);
		i++;
		ptr=NULL;
	}
	printf("str:%s\n",str);
	printf("str: ");
	for(i=0;i<n;i++)
		if(str[i]=='\0')
			str[i]=' ';
	printf("%s",str);	

}
