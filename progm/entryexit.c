#include<stdio.h>
int main()
// Exit controlled loop
{
	char ch;
	int bit,cnt;
	ch=getchar();
	cnt=0;
	bit=31;
TEST:((ch>>bit)&1)?++cnt:0;
     --bit;
     if(bit>=0)
     {
	     goto TEST;
     }
     printf("set bit cnt=%d in data %d\n",cnt,ch);
}


//Entry controlled loop
/*{
	char ch;
	int bit,cnt;
	ch=getchar();
	cnt=0;
	bit=31;
TEST:if(bit>=0)
     {
	     ((ch>>bit)&1)?++cnt:0;
	     --bit;
	     goto TEST;
     }
     printf("setbit cnt=%d in data %d\n",cnt,ch);
}
*/
