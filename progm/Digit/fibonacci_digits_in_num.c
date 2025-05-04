#include<stdio.h>
int main()
{
	int a=0,b=0,c=1,digit;
	long int num,temp;
	printf("Enter the number\n");
	scanf("%ld",&num);
	temp=num;
	while(temp)
	{
		digit=temp%10;
		a=0;b=0;c=1;
		if(digit==a||digit==b)
			printf("%d ",a);
		while(c<=digit)
		{
			a=b;
			b=c;
			c=a+b;
			if(digit==c)
				printf("%d ",digit);
		}
		temp/=10;
	}
	printf("\n");
}
