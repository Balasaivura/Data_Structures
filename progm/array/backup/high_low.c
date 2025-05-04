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
void high_low(int *arr,int n)
{
	int high=0,low=9,i;
	for(i=0;i<n;i++)
	{
		if(arr[i]>high)
			high=arr[i];
		if(arr[i]<low)
			low=arr[i];
	}
	printf("The lowest number is:%d\n",high);
	printf("The higest number is:%d\n",low);
}	
int main()
{
	srand(getpid());
	int arr[10],n;
	n=sizeof(arr)/sizeof(arr[0]);
	input(arr,n);
	print(arr,n);
	high_low(arr,n);
}
