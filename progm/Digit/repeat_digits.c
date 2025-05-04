#include<stdio.h>
int main()
{
	int i,digit,count;
	long int num,temp;
	printf("Enter the number\n");
	scanf("%ld",&num);
	for(i=0;i<=9;i++)
	{
		count=0;
		for(temp=num;temp;temp/=10)
		{
			digit=temp%10;
			if(digit==i)
				count++;
		}
		if(count>1)
		{
			printf("%d",i);
		}
	}
	printf(" is the repeated digits of %ld\n",num);
}
