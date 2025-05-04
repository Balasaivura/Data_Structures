#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<math.h>
void input(int *,int);
void print(int *,int);
int checkarmstrong(int);
void armstrong(int *,int);
int main()
{
	int arr[100],n;
	scanf("%d",&n);
	input(arr,n);
	print(arr,n);
	armstrong(arr,n);
}
void input(int *arr,int n)
{
	int i;
	srand(getpid());
	for(i=0;i<n;i++)
	{
		//scanf("%d",&arr[i]);
		arr[i]=rand()%1000;
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
void armstrong(int *arr,int n)
{
	int i,flag=0;
	for(i=0;i<n;i++)
	{
		if(checkarmstrong(arr[i])==1)
		{
			flag=1;
			printf("%d ",arr[i]);
		}
	}
	if(flag==0)
		printf("armstrong not found\n");
}
int checkarmstrong(int num)
{
	int temp,cnt=0,sum=0,digit;
	for(temp=num;temp;temp/=10)
	{
		cnt++;
	}
	int p;
	for(temp=num;temp;temp/=10)
	{
		digit=temp%10;
		p=pow(digit,cnt);
		sum=sum+p;
	}
	if(sum==num)
		return 1;
	else
		return 0;
}
