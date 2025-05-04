#include<stdio.h>
int main()
{
	int num,count=0,i;
	printf("Enter the number\n");
	scanf("%d",&num);
	for(i=31;i>=0;i--)
	{
		if((num>>i)&1)
			count++;
	}
	printf("%d is the setbit count\n",count);
}

