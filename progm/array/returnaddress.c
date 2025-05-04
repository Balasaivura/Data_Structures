#include<stdio.h>
int *returnadd(int *,int);
int main()
{
	int a[5],n,i,add;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d",&n);
	add=returnadd(a,n);
	//add=add+i-add;
	printf("%d",add);
}
int *returnadd(int *a,int n)
{
	int i=0;
	for(a;*a;a++)
	{
		i++;
		printf("add1: %d\n",a);
		if(n==*a)
			break;
	}
	printf("%d\n",a);
	return i;
}

