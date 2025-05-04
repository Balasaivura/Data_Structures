#include<stdio.h>
#include<stdio_ext.h>
int main()
{
	int arr[100],n,i,j,t,temp,p;
	printf("Enter no elements to store:\n");
	scanf("%d",&n);
	if(n>100||n<=0)
	{
		printf("Invalid size");
		return 0;
	}
	else
	{
		printf("Enter the %d elements:\n",n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		printf("Enter the number place place to end\n");
		scanf("%d",&p);
		for(i=0;i<n;i++)
		{
			if(arr[i]==p)
			{
				temp=arr[i];
				for(j=i;j<n;j++)
				{
					arr[j]=arr[j+1];
				}
				arr[j-1]=temp;
			}
			else if(arr[i-1]==p)
                        {
                                temp=arr[i-1];
                                for(j=i-1;j<n;j++)
                                {
                                        arr[j]=arr[j+1];
                                }
                                arr[j-1]=temp;
                        }

		}
	}
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
}

