#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void print(int *,int );
void input(int *,int );
void oddeven(int *,int );
int main()
{
	int arr[10],n;
	n=sizeof(arr)/sizeof(arr[0]);
	input(arr,n);
	print(arr,n);
	oddeven(arr,n);
}
void input(int *arr,int n)
{
	int i;
	srand(getpid());
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
void oddeven(int *arr,int n)
{
	int i,j=0,arr1[10];
	for(i=0;i<n;i++)
	{
		if(arr[i]%2!=0)
			arr1[j++]=arr[i];
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
			arr1[j++]=arr[i];
	}
	print(arr1,n);
}


