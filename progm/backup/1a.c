#include<stdio.h>
#include<math.h>
int main()
{
	int num,i;
	long int p,r_num=0;
	printf("Enter the number\n");
	scanf("%d",&num);
	for(i=31;i>=0;i--)
	{
		printf("%d ",(num>>i)&1);
	}
	printf("\n");
	for(i=0;i<=31;i++)
	{
		//p=pow(2,(i*((num>>i)&1)));
		//sum=sum+p;
		if((num>>i)&1)
		{	
			r_num|=1<<(31-i);
		}
		//printf("%ld ",r_num);
		printf("%d ",(num>>i)&1);
	}
	printf(" %ld \n",r_num);
}
