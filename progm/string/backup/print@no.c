#include<stdio.h>
#include<string.h>
int main()
{
	char str[10],*p;
	int num,digit,rev=0;
	printf("Enter the number:");
	fgets(str,10,stdin);
	if(str[strlen(str)-1]=='\n')
		str[strlen(str)-1]='\0';
	p=str;
	num=atoi(str);
	for(num;num;num/=10)
	{
		digit=num%10;
		rev=rev*10+digit;
	}
	for(num=rev;num;num/=10)
	{
		digit=num%10;
		for(int i=0;i<digit;i++)
			printf("@");
		printf(" ");
	}
}

