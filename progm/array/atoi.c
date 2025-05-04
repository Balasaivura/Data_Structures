#include<stdio.h>
#include<string.h>
int myatoi(char *);
int main()
{
	char str[10]={'5','6','1','7'};
	int res;
	res=myatoi(str);
	printf("%d\n",res);
}
int myatoi(char *str)
{
	int i,data=0,d=0,n;
	int flag=1;
	if(str[0]=='-')
	{
		flag=-1;
		str++;
	}
	n=strlen(str);
	//n=sizeof(str)/sizeof(str[0]);
	for(i=0;i<n;i++)
	{
		d=str[i]-48;
		data=data*10+d;
	}
	return data*flag;
}

/*int myatoi(char *str)
{
	int i=0,flag=1,data=0;
	if(str[0]=='-')
	{
		flag=-1;
		str++;
	}
	while(str[i])
	{
		data=data*10+str[i]-48;
		i++;
	}
	return data*flag;
}
*/
