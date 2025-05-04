#include<stdio.h>
int main()
{
	int min,max,a=0,b=0,c=1;
	printf("Enter the min & max\n");
	scanf("%d %d",&min,&max);
	printf("%d %d ",a,b);
	while(c<=max)
	{
		a=b;
		b=c;
		c=a+b;
		if(c>=min&&c<=max)
			printf("%d ",c);
	}
	printf("\n");
}
