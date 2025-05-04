#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void input(int *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
		//arr[i]=rand()%100;
}
void print(int *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
void remove_duplicate(int *arr,int n)
{
	int i=0,j=0,k=0,temp[n];
	for(i=0;i<n;i++)
	{
		int flag=0;
		for(k=0;k<j;k++)
		{
			if(arr[i]==temp[k]);
			{
				flag=1;
				break;
			}
		}
		if(!flag)
		{	
			temp[j]=arr[i];
			j++;
			printf("j=%d ",j);
		}
		printf("i=%d ",i);
	}
	for(i=0;i<j;i++)
		arr[i]=temp[i];
	print(arr,j);
}
int main()
{
	srand(getpid());
	int arr[10],n;
	n=sizeof(arr)/sizeof(arr[0]);
	input(arr,n);
	print(arr,n);
	remove_duplicate(arr,n);
}
