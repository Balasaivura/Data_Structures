#include<stdio.h>
int main()
{
	int min,max,temp,i;
	int sum=0,digit;
	scanf("%d %d",&min,&max);
	for(i=min;i<=max;i++)
	{
		/*sum=0;
		for(temp=i;temp!=0;temp/=10)
		{
			digit=temp%10;
			sum=sum+digit;
		}*/
		//if(sum==9||sum==18){
			//fflush(stdout);
		if(i%9==0)
			printf("%d ",i);
	
	}
}


/*int main()
{
	int num,i,sum=0,digit;
	scanf("%d",&num);
	while(num/10!=0)
	{
		sum=0;
		for(i=num;i!=0;i/=10)
		{
			digit=i%10;
			sum+=digit;
		}
		num=sum;
	}
	printf("%d",sum);
}
*/					
