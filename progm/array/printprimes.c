#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void rearrangearray(int *,int);
void fillarray(int *,int,int,int);
void printarray(int *,int);
void locateprime(int *,int);
int checkprime(int);
int checkrepeat(int *,int);
int main()
{
	int min,max,n;
	int arr[20];
	srand(getpid());
	n=sizeof(arr)/sizeof(arr[0]);
	printf("Enter min & max value:\t");
	scanf("%d %d",&min,&max);
	fillarray(arr,n,min,max);
	printarray(arr,n);
	locateprime(arr,n);
	rearrangearray(arr,n);
}
void rearrangearray(int *arr,int n)
{
	int i,k;
	int j=0,temp;
	for(i=0;i<n;i++)
	{
		if(checkprime(arr[i]))
		{
			temp=arr[i];
			for(k=i-1;k>=j;k--)
				arr[k+1]=arr[k];

			arr[j]=temp;
			j++;
		}
	}
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
void fillarray(int *arr,int n,int min,int max)
{
	int i,d;
	d=max-min+1;
	for(i=0;i<n;i++){
		arr[i]=rand()%d+min;
		if(checkrepeat(arr,i))
			i--;
	}
	printf("\n");
}
void printarray(int *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
void locateprime(int *arr,int n)
{
	int i;
  	printf("prime at:");
  	for(i=0;i<n;i++)
  	{
  		if(checkprime(arr[i]))
  			printf("%d ",i);
  	}
  	printf("\n");
}
int checkprime(int data)
{
	int v;
	for(v=2;v<data/2;v++)
		if(data%v==0)
			return 0;
	return 1;
}
int checkrepeat(int *arr,int i)
{
	int j;
	for(j=i-1;j>=0;j--)
		if(arr[j]==arr[i])
			return 1;
	return 0;
}

