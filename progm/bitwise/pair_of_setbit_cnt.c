#include<stdio.h>
int main()
{
	int num,i,count=0;
	printf("Enter the number\n");
	scanf("%d",&num);
	for(i=31;i>=0;i--)
	{
		if(((num>>i)&1)&&((num>>(--i))&1))
			count++;
	}
	printf("%d is pair of set bit count\n",count);
}
