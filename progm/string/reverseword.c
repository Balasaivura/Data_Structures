#include<stdio.h>
#include<string.h>
int main()
{
	char s1[100],ch;
	ch=' ';
	char *ptr;
	int i,n,j,cnt;
	gets(s1);
	ptr=s1;
	n=strlen(s1);
	for(i=0;i<n;i++)
	{
		if(ptr[i]==ch)
		{
			cnt=0;
			for(j=i+1;j<n;j++)
			{
				cnt++;
				if(ptr[j]==ch)
					break;
			}
			memmove(ptr[i]+1,ptr[j]+cnt,cnt);
			break;
		}
	}
	printf("cnt :%d\n",cnt);
}

