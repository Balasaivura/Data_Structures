#include<stdio.h>
#include<ctype.h>
int main()
{
	int i,max=0;
	char str[30];
	puts("Enter a string:");
	gets(str);
	for(i=0;str[i];i++)
	{
		if(isalpha(str[i]))
		{
			if(str[i]>max)
				max=str[i];
		}
	}
	if(max==0)
		printf("no alphabet found");
	else
		printf("higher alphabet:%c\n",max);
}
