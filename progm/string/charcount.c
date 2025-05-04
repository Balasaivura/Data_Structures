#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],ch,*p;
	int n,cnt=0;
	fgets(s1,100,stdin);
	n=strlen(s1);
	if(s1[n-1]=='\n')
		s1[n-1]='\0';
	n=strlen(s1);
	ch=getchar();
	for(p=s1;*p;p++)
	{
		if(*p==ch)
			cnt++;
	}
	printf("cnt:%d\n",cnt);
}


