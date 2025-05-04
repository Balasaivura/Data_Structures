#include<stdio.h>
int main()
{
	int i,digit;
	long int num,temp;
	printf("Enter the number\n");
	scanf("%ld",&num);
	for(i=0;i<=9;i++)
	{
		for(temp=num;temp;temp/=10)
		{
			digit=temp%10;
			if(digit==i)
				printf("%d",digit);
		}
	}
	printf(" is the acending order of %ld\n",num);
}
