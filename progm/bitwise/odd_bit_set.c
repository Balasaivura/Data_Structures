#include<stdio.h>
int main()
{
	int num,i,count=0;
	printf("Enter the number\n");
	scanf("%d",&num);
	i=31;
	while(i>=0)
		printf("%d ",(num>>i--)&1);
	printf("\n");
	i=1;
	while(i<=31)
	{
		if(i%2!=0)
		{
			num|=(1<<i);
			count++;
		}
		i++;
		if(count==5)
			break;
	}
	i=31;
	while(i>=0)
		printf("%d ",(num>>i--)&1);
	printf("\n");
}	
