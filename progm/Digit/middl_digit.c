#include<stdio.h>
int main()
{
	int num,temp,digit,count=0,count1=0;
	printf("Enter the number\n");
	scanf("%d",&num);
	temp=num;
	while(temp)
	{
		count++;
		temp/=10;
	}
	temp=num;
	while((count1++)!=(count/2)+1)
	{
		digit=temp%10;
		temp/=10;
	}
	printf("%d\n",digit);
}
