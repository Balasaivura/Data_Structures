#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int palindrome(char *);
int main()
{
	char str[20];
	puts("Enter a string:");
	gets(str);
	if(palindrome(str))
		printf("palindrome\n");
	else
		printf("not a palindrome\n");
}
int palindrome(char *str)
{
	int i,j,n,flag=1;
	n=strlen(str);
	for(i=0,j=n-1;i<j;i++,j--)
	{
		if(str[i]!=str[j])
		{
			flag=1;
			break;}
		else
			flag=0;
	}
	if(flag==0)
		return 1;
	else
		return 0;
}
