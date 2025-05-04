#include<stdio.h>
int main()
{
	long int num,temp;
	int digit,low,low2;
	printf("Enter the number\n");
	scanf("%d",&num);
	temp=num;
	low=low2=9;
	while(temp)
	{
		digit=temp%10;
		if(digit<low)
			low=digit;
		temp/=10;
	}
	temp=num;
	while(temp)
	{
		digit=temp%10;
		if((digit<low2)&&(digit!=low))
			low2=digit;
		temp/=10;
	}
	printf("%d is the second lowest digit in %d\n",low2,num);
}
