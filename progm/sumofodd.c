#include<stdio.h>
int main()
{
int data,temp,res,sum=0;
scanf("%d",&data);
for(temp=data;temp;temp/=10)
{
	res=temp%10;
	if(res%2!=0)
	sum=sum+res;
	}
printf("data=%d temp=%d sum=%d\n",data,temp,sum);
}
