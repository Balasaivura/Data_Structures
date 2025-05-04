#include<stdio.h>
int main()
{
	int num,temp,sum=0,flag=0,digit;
	printf("Enter the number\n");
	scanf("%d",&num);
	temp=num;
	while(temp)
	{
		digit=temp%10;
		if(digit%2==0&&flag==1)
		{
			sum=sum+digit;
			flag=0;
		}
		if(digit%2!=0&&flag==0)
		{
			sum=sum+digit;
			flag=1;
		}
		temp=temp/10;
	}
	printf("sum= %d\n",sum);
}
