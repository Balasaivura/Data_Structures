#include<stdio.h>
int main()
{
	char ch,*p,str[20];
	int count=0;
	printf("Enter the string\n");
	scanf("%s",str);
	p=str;
	while(*p)
	{
		ch=*p;
		count=0;
		while(ch==*p)
		{
			count++;
			p++;
		}
		printf("%c%d",ch,count);
	}
}
	
