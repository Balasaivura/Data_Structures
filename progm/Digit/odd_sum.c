#include<stdio.h>
int main()
{
	int num,temp,sum=0,digit;
	printf("Enter the number\n");
	scanf("%d",&num);
	temp=num;
	while(temp)
	{
		digit=temp%10;
		if(digit%2!=0)
			sum=sum+digit;
		temp=temp/10;
	}
	printf("%d\n",sum);
}
