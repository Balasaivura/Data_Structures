#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int high(int);
void low(int,int);
int main()
{
        int arr[10],n,i,s;
        n=sizeof(arr)/sizeof(*arr);
        srand(getpid());
        for(i=0;i<n;i++)
                arr[i]=rand()%9001+1000;
        for(i=0;i<n;i++)
                printf("%d ",arr[i]);
        printf("\n");
        for(i=0;i<n;i++)
        {
		s=high(arr[i]);
		low(arr[i],s);
	}
}
int high(int n)
{
	int temp,high=0,digit;
	for(temp=n;temp;temp/=10)
	{
		digit=temp%10;
		if(digit>high)
			high=digit;
	}
	printf("%d ",high);
	return high;
}

void low(int n,int s)
{
        int temp,low=s,digit;
        for(temp=n;temp;temp/=10)
        {
                digit=temp%10;
                if(digit<low)
                        low=digit;
        }
        printf("%d, ",low);
}
