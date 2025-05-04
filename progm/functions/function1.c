#include<stdio.h>
int sum(int,int);
int prime(int);
int sum(int c,int d)
{
	int p;
	printf("in sum def c=%d &c=%lu\n",c,&c);
	printf("enter the p value to check prime or not\n");
	scanf("%d",&p);
	if(prime(p))
		printf("prime number\n");
	else
		printf("not a prime number\n");
	return c+d;
}
void main()
{
	vector();
	int a=10,b=20;
	printf("in main a=%d &a=%lu\n",a,&a);
	int res=sum(2,3);
	printf("res=%d\n",res);
}
void vector(void)
{
	int v=100;
	printf("in vector function v=%d &v=%lu\n",v,&v);
}
int prime(int p)
{
	int i,cnt=0;
	printf("in prime funtion cnt=%d &cnt=%lu\n",cnt,&cnt);
	for(i=2;i<p;i++)
	if(p%i==0)
		return 0;
	return 1;
}

