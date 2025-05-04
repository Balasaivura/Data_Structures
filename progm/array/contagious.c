#include<stdio.h>
int main()
{
	int arr[100];
	int k,n,sum,res,i,j;
	scanf("%d",&n);
	if(n>100)
	{
		printf("Memory Overflow");
		return 0;
	}
	if(n<=0)
	{
		printf("invalid main array size");
		return 0;
	}
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	scanf("%d",&k);
	if(k>n)
	{
		printf("invalid sub array size");
		return 0;
	}
	for(i=0;i<n-k+1;i++)
	{
		sum=0;
		for(j=i;j<k+i;j++)
			sum=sum+arr[j];
		if(sum>res)
			res=sum;
	}
	printf("%d",res);
}

