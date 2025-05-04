#include<stdio.h>
int main()
{
	int min,max,count=0,i;
	printf("Enter the min & max\n");
	scanf("%d %d",&min,&max);
	for(;min<=max;min++)
	{
		i=count=0;
		while(i<=31)
		{
			if((min>>i)&1)
				count++;
			i++;
		}
		if(count%2==0)
			printf("%d ",min);
	}
	printf("\n");
}
