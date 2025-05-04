#include<stdio.h>
int main()
{
int data,temp,res=0,big=0;
scanf("%d",&data);
for(temp=data;temp;temp/=10)
{
	res=temp%10;
	if(res>big)
	big=res;
}
printf("data=%d temp=%d big=%d\n",data,temp,big);
}
