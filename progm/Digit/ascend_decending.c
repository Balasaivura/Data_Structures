#include<stdio.h>
int main()
{
	long int num;
	int temp,digit,d1=9,d2=0,count1=0,count2=0;
	printf("Enter the number\n");
	scanf("%ld",&num);
	temp=num;
	for(num;num;num/=10)
	{
		digit=num%10;
		if(d1>digit)
			d1=digit;
		else
			count1++;
		if(d2<digit)
			d2=digit;
		else
			count2=0;
	}
	if(count1==0)
		printf("%d is ascending\n",temp);
	else if(count2==0)
		printf("%d is descending\n",temp);
	else
		printf("Invalid Number\n");
}
