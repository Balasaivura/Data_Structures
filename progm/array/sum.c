#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int validnumber(char *);
int main()
{
	char str[12];
	int n1,n2;
	int sum;
input1:printf("Enter 1st integer:");
       scanf("%s",str);
       printf("\n");
       if(validnumber(str)==0)
       {
	       printf("Error:only numeric chars allowed in integer:\n");
	       goto input1;
       }
       n1=atoi(str);
input2:printf("Enter 2st integer:");
       scanf("%s",str);
       if(validnumber(str)==0)
       {
               printf("Error:only numeric chars allowed in integer:\n");
               goto input2;
       }
       n2=atoi(str);
       sum=n1+n2;
       printf("sum=%d\n",sum);
       return 0;
}
int validnumber(char *str)
{
	int i,cnt=0,n;
	n=sizeof(str)/sizeof(str[0]);
	//n=printf("%s",str);
	for(i=0;i<n;i++)
	{
		if(str[i]>=65&&str[i]<=90||str[i]>=97&&str[i]<=122)
			cnt++;
	}
	if(cnt==0)
		return 1;
	else
		return 0;
}

/*int validnumber(char *str)
{
	if(*str=='-')
		str++;
	while(*str)
	{
		if(!isdigit(*str))
			return 0;
		++str;
	}
	return 1;
}
*/
