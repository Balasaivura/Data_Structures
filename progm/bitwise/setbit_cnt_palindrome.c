#include<stdio.h>
int main()
{
	int num,count=0,count2,i,rev=0,digit;
	printf("Enter the num\n");
	scanf("%d",&num);
	i=31;
	while(i>=0)
	{
		if(((num>>i)&1)&&(num>>(--i))&1)
			count++;
		i--;
	}
	count2=count;
	while(count2)
	{
		digit=count2%10;
		rev=rev*10+digit;
		count2/=10;
	}
	if(count==rev)
		printf("%d\n",count);
	else
		printf("not a palindrome\n");
}
