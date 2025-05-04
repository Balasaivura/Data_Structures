#include<stdio.h>
int main()
{
	int num,count=0,count2=0,i;
	printf("Enter the number\n");
	scanf("%d",&num);
	i=0;
	while(i<=31)
	{
		if((num>>i)&1)
		{
			count++;
			if(count>count2)
			{
				count2=count;
			}
		}
		else
			count=0;
		i++;
	}
	printf("%d\n",count2);
}
