#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int checkprime(int);
void print(int *,int);
int main()
{
	int n,i,*arr,s;
	scanf("%d",&n);
	arr=malloc(n*sizeof(int));
	scanf("%d",&s);
	printf("prime numbers\n");
	for(i=0;i<n;)
	{
		if(checkprime(s))
			arr[i++]=s;
			s++;
		//return 0;
	}
	print(arr,n);
}

int checkprime(int p)
{
	int i,flag=0;
	for(i=2;i<p;i++)
	{
		if(p%i==0)
			break;
	}
	if(p==i)
		return 1;
	else
		return 0;
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

