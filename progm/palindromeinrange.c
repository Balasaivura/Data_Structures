#include<stdio.h>
int main()
{
	int min,max,i,temp,res1=0,digit=0;
	scanf("%d %d",&min,&max);
	//for(min;min<max;min++)
	//`	printf("%d ",min);

	for(i=min;i<=max;i++)
	{	
		res1=0;
		for(temp=i;temp;temp/=10)
		{
			//res1=temp%10;
			digit=temp%10;
			res1=res1*10+digit;
		}
			if(res1==i)
				printf("%d ",i);
		
	}
	
}
