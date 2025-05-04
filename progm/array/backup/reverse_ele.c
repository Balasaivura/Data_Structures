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
void reverse(int *arr,int n)
{
	int i,j,arr1[n];
	for(i=0,j=n-1;i<n;i++,j--)
		arr1[i]=arr[j];
	print(arr1,n);
}
int main()
{
	srand(getpid());
	int arr[10],n;
	n=sizeof(arr)/sizeof(arr[0]);
	input(arr,n);
	print(arr,n);
	reverse(arr,n);
}
