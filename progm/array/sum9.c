#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int sum(int);
int main()
{
	int arr[10],n,i,s;
	n=sizeof(arr)/sizeof(*arr);
	srand(getpid());
	for(i=0;i<n;i++)
		arr[i]=rand()%9001+1000;
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
	for(i=0;i<n;i++)
	{
		if(sum(arr[i])==1)
			printf("%d ",arr[i]);
	}
	printf("\n");
}
int sum(int n)
{
	if(n%9==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
