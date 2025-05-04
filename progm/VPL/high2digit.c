#include<stdio.h>
int main()
{
unsigned int data;
int temp,res=0,big1=0,big2=0,cnt=0;
scanf("%d",&data);
if(num<0){num=-num;}
for(temp=data;temp;temp/=10)
{
	cnt++;
	res=temp%10;
	if(res>big1){
	big2=big1;
	big1=res;
	}
	else if(res>big2&&res!=big1)
		big2=res;
}
if(cnt==1||data==0)
printf("you have supplied single digit only\n");
else if(big2==0)
printf("all digits are same\n");
else
printf("data=%d temp=%d big2=%d\n",data,temp,big2);
}
