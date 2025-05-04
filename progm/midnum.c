#include<stdio.h>
int main()
{
	int num,temp,count=0,mid,i,res;
	printf("Enter the number\n");
	scanf("%d",&num);
	temp=num;
	while(temp)
	{
		temp/=10;
		count++;
	}
	mid=count/2;
	temp=num;
	for(i=mid;i<=(count-mid);++i,temp/=10);
		res=temp%10;
		printf("%d",res);
}

