#include<stdio.h>
int main()
{
	int a[20],n,i,j,r,v,temp;
	char ch;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter the rotate l or r\n");
	scanf(" %c",&ch);
	printf("Enter how many times to rotate\n");
	scanf("%d",&v);
	if(ch=='r')
	{
		for(i=0;i<v;i++)
		{
			temp=a[n-1];
			for(j=n-2;j>=0;j--)
				a[j+1]=a[j];
			a[0]=temp;
		}
	}
	if(ch=='l')
	{
		for(i=0;i<1;i++)
		{
			temp=a[0];
			for(j=0;j<n-1;j++)
				a[j]=a[j+1];
			a[n-1]=temp;
		}
	}
	for(i=0;i<n;i++)
		printf("%d",a[i]);
}
