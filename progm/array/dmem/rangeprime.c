#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int checkprime(int);
void print(int *,int);
int main()
{
	int min,max,n,*arr,i,data;
	printf("Enter min & max\n");
	scanf("%d %d",&min,&max);
	n=((max-min)/2);
	arr=malloc(n*sizeof(int));
	if(arr==NULL)
	{
		printf("Error:not sufficient memoty\n");
		exit(0);
	}
	/*i=0;
	for(data=min;data<=max;data++)
	{
		if(checkprime(data))
			arr[i++]=data;
	}
	//using realloc
	n=i;
	arr=realloc(arr,n*sizeof(int));
	print(arr,n);*/
	//using realloc in the for block//
	for(i=0,data=min;data<=max;data++)
        {
		arr=realloc(arr,(i+1)*sizeof(int));
                if(checkprime(data))
                        arr[i++]=data;
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

