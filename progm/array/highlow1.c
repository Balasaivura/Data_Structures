#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	int arr[10],n,i,high=0,low=0;
	n=sizeof(arr)/sizeof(*arr);
	srand(getpid());
	for(i=0;i<n;i++)
		arr[i]=rand()%9001+1000;
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
	for(i=0;i<n;i++)
	{
			if(arr[i]>high)
			{
				high=arr[i];
				low=arr[i];
			}
	}
	for(i=0;i<n;i++)
	{
                        if(arr[i]<low)
                        {
                                low=arr[i];
                        }

	}
	printf("%d %d\n",high,low);
}
