#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#define N 20
void input(int *,int);
void print(int *,int);
void sort(int *,int);
int main()
{
	int arr[N];
	int i,n;
	input(arr,N);
	print(arr,N);
	printf("Enter the count of data to sort:");
	scanf("%d",&n);
	if(n<1||n>N)
	{
		printf("invalid entry\n");
		return 0;
	}
	sort(arr,n);
	print(arr,N);
	return 0;
}
void input(int *arr,int n)
{
	int i;
	srand(getpid());
	for(i=0;i<n;i++)
		arr[i]=rand()%401+100;
}
void print(int *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
void sort(int *arr,int n)
{
	int i,j,flag,temp;
	for(i=n-1;i>0;i--)
	{
		flag=0;
		for(j=0;j<i;j++)
		{
			//if(arr[j]<arr[j+1])//for decending
			if(arr[j]>arr[j+1])//for ascending
			{
				flag=1;
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
		if(flag==0)
			break;
	}
}

