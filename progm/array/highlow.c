#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	int arr[10],n,i,high=0,low=0,temp,digit;
	n=sizeof(arr)/sizeof(*arr);
	srand(getpid());
	for(i=0;i<n;i++)
		arr[i]=rand()%9001+1000;
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(temp=arr[i];temp;temp/=10)
		{	digit=temp%10;
			if(digit>high)
			{
				high=digit;
				low=digit;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		for(temp=arr[i];temp;temp/=10)
                {       digit=temp%10;
                        if(digit<low)
                        {
                                low=digit;
                        }

		}
	}
	printf("%d %d\n",high,low);
}
