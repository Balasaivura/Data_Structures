#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void input(int *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
		arr[i]=rand()%100;
}
void print(int *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
void sum_of_array(int *arr,int n)
{
	int sum=0,i;
	for(i=0;i<n;i++)
		sum+=arr[i];
	printf("The sum of Array:%d\n",sum);
}
int main()
{
	srand(getpid());
	int arr[10],n;
	n=sizeof(arr)/sizeof(arr[0]);
	input(arr,n);
	print(arr,n);
	sum_of_array(arr,n);
}

