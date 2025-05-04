#include<stdio.h>
int main()
{
	int a[10]={11,22,33,44,55};
	int n,i,j,pos;
	n=sizeof(a)/sizeof(a[0]);
	printf("%d\n",n);
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
	printf("Enter a postion\n");
	scanf("%d",&pos);
	for(i=0;i<=pos-1;i++)
	{
		a[pos-1]='\0';
		a[i]=a[i+1];
	}
	
	for(i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}
