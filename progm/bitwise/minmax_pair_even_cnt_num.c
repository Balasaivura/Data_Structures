#include<stdio.h>
int main()
{
	int min,max,count=0,count2=0,i;
	printf("Enter the min & max\n");
	scanf("%d %d",&min,&max);
	for(;min<=max;min++)
	{
		i=count=count2=0;
		while(i<=31)
		{
			if((min>>i)&1)
				count++;
			i++;
		}
		i=0;
		while(i<=31)
		{
			//if(((min>>i)&1)&&((min>>i+1)&1))
			//	count2++;
			if(((min>>i)&1)&&((min>>(++i))&1))
                        	count2++;
			++i;
		}
		if((count%2==0)&&((count2!=0)&&(count2%2==0)))
			printf("%d\n ",min);
	}
	printf("\n");
}
