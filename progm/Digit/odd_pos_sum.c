#include<stdio.h>
int main()
{
	int num,temp,digit,sum=0,count=0;
	printf("Enter the number\n");
	scanf("%d",&num);
	temp=num;
	while(temp)
	{
		digit=temp%10;
		++count;
		if(count%2!=0)
		{
			sum=sum+digit;
			printf("%d %d %d\n",count,digit,sum);
		}
		temp=temp/10;
	}
	printf("%d\n",sum);
}
