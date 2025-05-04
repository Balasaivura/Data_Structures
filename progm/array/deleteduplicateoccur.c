#include<stdio.h>
#include<string.h>
void print(int *,int);
void input(int *,int);
int main()
{
	int arr[100],i,j,n,cnt=0;
		scanf("%d",&n);
	input(arr,n);
//	print(arr,n);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			{
				memmove(arr+i,arr+i+1,(n-i-1)*4);
				n--;
			}
		}
	
                for(j=i+1;j<n;j++)
                {
			if(arr[i]==arr[j])
			{
			       memmove(arr+i,arr+i+1,(n-i-1)*4);
				n--;
			}

                }
        }
        print(arr,n);

}
void input(int *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
}
void print(int *arr,int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");
}

