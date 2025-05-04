#include<stdio.h>
#include<string.h>
char *mystrchr(const char *,char);
int main()
{
	char s1[100],s2[10];
	char *ptr;
	gets(s1);
	gets(s2);
	//ptr=strstr(s1,s2);
	ptr=mystrstr(s1,s2);
	if(ptr==NULL)
		printf("Not found\n");
	else
		printf("found at:%d\n",ptr-s1);
}
char *mystrstr(char *s1,char *s2)
{

/*int main()
{
	char str[20]="abcdefcr";
	int n;
	char *res; 
	n=strlen(str);
	char ch='c';
	res=mystrchr(str,ch);
	printf("%s\n",res);
}
//it returns first occurrence of the given character in the string.
char *mystrchr(const char *str, char ch)
{
	int i;
	for(i=0;str[i];i++)
	{
		if(str[i]==ch)
			return str+i;
	}
	return 0;


	do
	{
		if(*str==ch)
			return str;
	}while(*str++);
	return NULL;
	
}*/
