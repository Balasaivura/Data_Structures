#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void nonrepeat(int *,int);
int main()
{
	int n,i;
	int arr[20];
	srand(getpid());
	n=sizeof(arr)/sizeof(arr[0]);
	for(i=0;i<n;i++)
		arr[i]=rand()%100+50;
	printf("the array: ");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
	printf("non repeated values: ");
	nonrepeat(arr,n);
	printf("\n");
}
void nonrepeat(int *arr,int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		int flag=0;
		for(j=0;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				flag++;
				//break;
			}

		}
		if(flag==1)
			printf("%d ",arr[i]);
	}
}






/*if(flag>=1)
  {
  for(k=0;k<=i-1;k++)
  {
  arr[i-1]='\0';
  arr[k]=arr[k+1];
  }
  }*/
//printf("%d ",arr[i]);
//break;
