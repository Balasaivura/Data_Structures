#include<stdio.h>
int main()
{
	int a[60];
	int n,i,j,temp,value,pos;
	//n=sizeof(a)/sizeof(a[0]);
	//printf("%d\n",n);
	printf("Enter size of array\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	printf("Enter a postion\n");
	scanf("%d",&pos);
	printf("Enter a value to insert\n");
	scanf("%d",&value);
	for(i=n-1;i>=pos-1;i--)
	{
		a[i+1]=a[i];
	}	
	a[pos-1]=value;
	for(i=0;i<=n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
