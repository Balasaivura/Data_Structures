#include<stdio.h>
int main()
{
	long int num,temp2,temp1;
	int flag=0,digit1,digit2;
	printf("Enter the number:\n");
	scanf("%ld",&num);
	for(temp2=temp1=num;temp1;temp1/=10)
	{
		digit1=temp1%10;
		for(temp2/=10;temp2;temp2/=10)
		{	
			//temp2/=10;
			digit2=temp2%10;
			if(digit2>digit1)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			break;
	}
	if(flag==0)
		printf("%ld is in the ascending order\n",num);
	else
		printf("%ld is not in the ascending order\n",num);
}
