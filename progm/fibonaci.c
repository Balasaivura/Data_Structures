#include<stdio.h>
/*int fib(int);
void main()
{
	int data,i,j;
	int min,max;
	scanf("%d %d",&min,&max);
	printf("Enter the data:\n");
	scanf("%d",&data);
	for(i=1;i<=data;i++)
	{	fflush(stdout);
		j=fib(i);
		if(j>=min&&j<=max)
		printf("%d ",j);}
}
int fib(int n)
{
	if(n==1)
		return 0;
	else if(n==2)
		return 1;
	else
		return (fib(n-2)+fib(n-1));
}
*/


int main()
{
	int a=0,b=1,c,max;
	scanf("%d",&max);
	printf("0,1,");
	for(c=a+b;(c=a+b)<=max;a=b,b=c)
		printf("%d, ",c);
}

