#include<stdio.h>
void checkrepeat(int *,int *,int);
int repeat(int *,int ,int); 
int main()
{
	int size,i;
	int arr[20],arr2[20];
	scanf("%d",&size);
	if(size==0||size<0)
		printf("invalid size");
	else if(size<=50)
	{
		for(i=0;i<size;i++)
			scanf("%d",&arr[i]);
		checkrepeat(arr,arr2,size);
	}
	else
		printf("Memory Overflow");
}
void checkrepeat(int *arr,int *arr2,int size)
{
	int j,i,k=0,flag=0,cnt=0,f=0;
	for(j=0;j<size;j++)
	{
		flag=0;
		for(i=0;i<size;i++)
		{
			if(arr[i]==arr[j])
			{
				flag++;
			}
		}
		if(flag>1)
		{
			f=1;
			arr2[k++]=arr[j];
			for(i=0;i<(k-1);i++)
			{
				if(arr2[i]==arr[j])
				{
					k--;
					break;
				}
			}
			/* if(repeat(arr2,arr[j],k)==0);
			   {  printf("%d ",arr[j]);
			   cnt=1;}*/
		}
	}
	if(f==1)
	{
		for(i=0;i<k;i++)
			printf("%d ",arr2[i]);
		printf("\n");
	}
	else
		printf("no repeated elements");
}
/*int repeat(int *arr2,int j,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr2[i]==j)
		{
			return 0;
			break;
		}
	}
	return 1;
}
*/
