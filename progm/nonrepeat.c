#include<stdio.h>
int main()
{
	int num,temp,cnt;
	int res=0,check=0;
	scanf("%d",&num);
	for(temp=num;temp;temp/=10)
	{
		res=temp%10;
		cnt=0;
		int temp2;
		for(temp2=num;temp2;temp2/=10)
		{
			if(temp2%10==res)
			cnt++;
		}
	if(cnt==1)
	{
		printf("%d",res);
		check=1;
	}
	}
	if(check==0)
		printf("no repetead found");	
		/*res2=temp1/10;
		for(temp2=res2;temp2;)
		{
			res3=temp2%10;
			if(res1!=res3)
				printf("%d",res3);
		}
	
		if(res1==res2)
		{
			cnt++;
			res2=res1;
		}
		if(cnt<1)
			printf("%d",res2);*/
	
}
