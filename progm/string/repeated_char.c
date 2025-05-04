#include<stdio.h>
int main()
{
	char str[20],i=0,ch,*p,*q;
	int count=0;
	printf("Enter the string\n");
	scanf("%s",str);
	q=p=str;
	while(*q)
	{
		ch=*q;
		i++;
		//p=str+i;
		count=0;
		while(*p)
		{
			if(ch==*p)
				count++;
			p++;
		}
		q++;
		p=str+i;
		if(count>1)
		{
			printf("%c",ch);
		}
	}
}
