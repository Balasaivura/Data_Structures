#include<stdio.h>
#include<string.h>
int main()
//Remove all the given char in the string 
/*{
	char str[20],ch,*p;
	gets(str);
	ch=getchar();
	for(p=str;p=strchr(p,ch);)
	{
		memmove(p,p+1,strlen(p+1)+1);
	}
	printf("%s\n",str);
}
*/
{
        char str[20],ch,*p;
        gets(str);
        ch=getchar();
	int cnt=0;
        for(p=str;p=strchr(p,ch);)
        {
		cnt++;
		if(cnt%2==0)
                	memmove(p,p+1,strlen(p+1)+1);
		p++;
        }
        printf("%s\n",str);
}

