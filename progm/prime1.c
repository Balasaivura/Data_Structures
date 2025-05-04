#include<stdio.h>
int main()
/*{
	int cnt=0,cnt1=0;
	int i,min,n;
	printf("Enter the no. of prime numbers & start number:");
	scanf("%d %d",&n,&min);
	while(min)
	{
	for(i=2;i<min;i++)
	{
	if(min%2==0)
	cnt++;
	if(cnt==0)
	{
	cnt1++;
	printf("%d ",min);
	}
	if(cnt1==n)
	break;
	}min++;
	}
}
*/


//printf n prime numbers from min
{
	int v,u,min,max,cnt=0;
	int flag,n;
	printf("Enter n number prime integers:\n");
	scanf("%d",&n);
	printf("Enter MIN and MAX range:\n");
	scanf("%d %d",&min,&max);
	for(v=min;v<=max;v++)
	{
		flag=1;
		for(u=2;u<=v/2;u++)
		{
			if(v%u==0)
			{
				flag=0;
				break;}
		}
	if(flag==1){
		cnt++;
		if((cnt<=n)==1)
			printf("%d ",v);
			
	}
	}
	printf("\nActual count=%d\n",cnt);
	return 0;
}



/*
//List and count of prime numbers in a supplied range
{
	int v,u,min,max,cnt=0;
	int flag;
	printf("Enter MIN and MAX range:\n");
	scanf("%d %d",&min,&max);
	for(v=min;v<=max;v++)
	{
		flag=1;
		for(u=2;u<=v/2;++u)
		{
			if(v%u==0)
			{
				flag=0;
				break;}
		}
	if(flag==1){
		cnt++;
		printf("%d ",v);
	}
	}
	printf("count=%d\n",cnt);
	return 0;
}
*/
