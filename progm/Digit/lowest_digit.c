#include<stdio.h>
int main()
{
	int num,temp,digit,low;
	printf("Enter the number\n");
	scanf("%d",&num);
	temp=num;
	low=temp%10;
	while(temp)
	{
		digit=temp%10;
		if(digit<low)
			low=digit;
		temp/=10;
	}
	printf("%d is the lowest digit in %d\n",low,num);
}
