#include<stdio.h>
int main()
{
	int i,digit;
	long int num,temp;
	printf("Enter the number\n");
	scanf("%ld",&num);
	for(i=9;i>=0;i--)
	{
		for(temp=num;temp;temp/=10)
		{
			digit=temp%10;
			if(digit==i)
				printf("%d",digit);
		}
	}
	printf(" is the decending order of %ld\n",num);
}
