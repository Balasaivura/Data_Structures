#include<stdio.h>
int main()
{
	int v,data,n,flag1=0,st;
	int d,flag2;
	printf("How many prime numbers you want:\n");
	scanf("%u",&n);
	printf("Enter the starting number:\n");
	scanf("%u",&st);
	input:printf("Enter a digit you want to be present in each prime number:\n");
	scanf("%d",&d);
	if(d<0||d>9){
	printf("error:please supply a digit\n");
	goto input;}
	for(data=st;n;data++)
	{
		//test the data is prime or not
		flag1=1;
		for(v=2;v<data;v++)
			if(data%v==0){flag1=0;break;}
		if(flag1==1)
		{
		//find the existance of d in data
		flag2=0;
		for(v=data;v;v/=10)
			if(v%10==d){flag2=1;break;}
		if(flag2==1)
		{printf("%u ",data);
		n--;
		}
		}
	}
} 
