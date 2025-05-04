#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void input(int *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
		arr[i]=rand()%10;
}
void print(int *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
void pair_cnt(int *arr,int n)
{
	int cnt=0,i;
	for(i=0;i<n;i++)
	{
		if((arr[i]+arr[i+1])==n)
			cnt++;
	}
	printf("The pair is :%d\n",cnt);
}
int main()
{
	srand(getpid());
	int arr[10],n;
	n=sizeof(arr)/sizeof(arr[0]);
	input(arr,n);
	print(arr,n);
	pair_cnt(arr,n);
}
