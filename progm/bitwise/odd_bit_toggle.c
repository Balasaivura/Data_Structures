#include<stdio.h>
int main()
{
	int num,i;
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
			num=num^(1<<i);
		i++;
	}
	i=31;
	while(i>=0)
		printf("%d ",(num>>i--)&1);
	printf("\n");
}	
