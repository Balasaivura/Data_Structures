#include<stdio.h>
int main()
{
	int num,temp,digit,high;
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
	printf("%d is the highest digit in %d\n",high,num);
}
