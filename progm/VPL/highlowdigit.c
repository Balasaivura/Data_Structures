#include<stdio.h>
int main()
{
	int num,temp,digit1=0,digit2=0,digit3=0;
	printf("Enter number:");
	scanf("%d",&num);
	for(temp=num;temp;temp/=10)
	{
		digit1=temp%10;
		if(digit1>digit2){
			digit2=digit1;
			digit3=digit2;}
	}
	for(temp=num;temp;temp/=10)
	{
		digit1=temp%10;
		if(digit1<digit3)
			digit3=digit1;
	}
	if(digit2==digit3)
	printf("all digits are same\n");
	else{
	printf("heighest %d\n",digit2);
	printf("lowest %d\n",digit3);
	}
}
