#include<stdio.h>
#include<string.h>
#include<ctype.h>
/*int main()
{
	char s1[100],s2[10]=" ";
	gets(s1);
	int cnt=1;
	char *ptr1,*ptr2;
	for(ptr=s1;ptr=strstr(ptr,s2);ptr++)
	{
		cnt++;
		for(ptr2=ptr;ptr2=strstr(ptr2,s2);ptr2++)
		{	
			//if(cnt%2==0)
			memmove(ptr2,ptr2+
	}
	printf("cnt:%d\n",cnt);
}
*/

#include<stdio.h>
#include<string.h>
int main()
{
        char s1[100],s2[10]=" ";
        gets(s1);
        int cnt=1;
        char *ptr1,*ptr2;
        for(ptr1=s1;ptr1=strstr(ptr1,s2);ptr1++)
        {
		if(isalpha(*(ptr1+1))||isdigit(*(ptr1+1)))
                	cnt++;
        }
        printf("cnt:%d\n",cnt);
}

