#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void fillarray(int *,int,int,int);
void printarray(int *,int);
void locateprime(int *,int);
void printprimefirst(int *,int);
int checkprime(int);
int checkrepeat(int *,int);
int main()
{
	int min,max,n,primelist;
	int arr[20];
	int arr2[20];
	srand(getpid());
	n=sizeof(arr)/sizeof(arr[0]);
	printf("Enter min & max value:\t");
	scanf("%d %d",&min,&max);
	fillarray(arr,n,min,max);
	printarray(arr,n);
	printprimefirst(arr,n);
	//locateprime(arr,n);
	//primelist=locateprime(arr,n);
	//printf("%d ",primelist);
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
	printf("the array:");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}
/*void locateprime(int *arr,int n)
{
	int i;
	printf("prime at:");
	for(i=0;i<n;i++)
	{
		if(checkprime(arr[i]))
			printf("%d ",i);
	}
	printf("\n");
}*/
void printprimefirst(int *arr,int n)
{
	int i,j;
	printf("sorted: ");
	for(i=0;i<n;i++){
		if(checkprime(arr[i])){
			for(j=0;j<i;j++)
				arr[j]=arr[i];}
			printf("%d ",arr[j]);}
	/*for(i=0;i<n;i++)
		if(!checkprime(arr[i]))
			printf("%d ",arr[i]);*/
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

