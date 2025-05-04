#include<stdio.h>
int main()
{
	int num,a=0,b=0,c=1;
	printf("Enter the number\n");
	scanf("%d",&num);
	printf("%d %d ",a,b);
	while(c<num)
	{
		a=b;
		b=c;
		c=a+b;
		printf("%d ",c);
	}
	printf("\n");
}
