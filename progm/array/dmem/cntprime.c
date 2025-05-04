#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void input(int *,int);
void print(int *,int);
int checkprime(int);
int main()
{
	int n,i,*arr,cnt;
	printf("how many integers sample you need\n");
	printf("Enter the size of array\n");
	scanf("%d",&n);
	arr=malloc(n*sizeof(int));
	input(arr,n);
	print(arr,n);
	printf("prime numbers : ");
	cnt=0;
	for(i=0;i<n;i++)
	{
		if(checkprime(arr[i]))
		{
			printf("%d ",arr[i]);
			cnt++;
		}
	}
	printf("total count %d\n",cnt);
	return 0;
}
void input(int *arr,int n)
{
	int i;
	srand(getpid());
	for(i=0;i<n;i++)
	{
		arr[i]=rand()%1000+2;
	}
}
void print(int *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int checkprime(int n)
{
	int i,flag=0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			//flag=1;
			break;
		}
	}
	if(i==n)
		return 1;
	else
		return 0;
}	
