#include<stdio.h>
#include<string.h>
void delete(int *,int ,int);
void input(int *,int);
void print(int *,int);
int main()
{
	int a[10],num;
	input(a,10);
	print(a,10);
	scanf("%d",&num);
	delete(a,10,num);
}
void input(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void print(int *a,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}
void delete(int *a,int n,int num)
{
	int i,k=n;
	for(i=0;i<n;i++)
	{
		if(a[i]==num)
		{	
			memmove(a+i,a+i+1,(n-i-1)*sizeof(int));
			--k;
		}
	}
	print(a,k);
}
