#include<stdio.h>
int main()
{
	int num,temp,digit,high,high2=0;
	printf("Enter the number\n");
	scanf("%d",&num);
	temp=num;
	high=temp%10;
	while(temp)
	{
		digit=temp%10;
		if(digit>high)
			high=digit;
		temp/=10;
	}
	temp=num;
	while(temp)
	{
		digit=temp%10;
		if((digit>high2)&&(digit!=high))
			high2=digit;
		temp/=10;
	}
	printf("%d is the second highest digit in %d\n",high2,num);
}
