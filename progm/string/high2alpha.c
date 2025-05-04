#include<stdio.h>
#include<ctype.h>
int main()
{
	int i;
	char str[20];
	char max1=0,max2=0;
	puts("enter a string");
	gets(str);
	for(i=0;str[i];i++)
	{
		if(isalpha(str[i]))
		{
			if(str[i]>max1){
				max2=max1;
				max1=str[i];
			}
			else if(str[i]>max2)
				max2=str[i];
		}
	}
	printf("%c\n",max2);
}
	

