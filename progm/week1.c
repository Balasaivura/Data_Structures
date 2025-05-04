//Qtion 2
#include<stdio.h>
/*int main()
{
	int i,num,cnt=0;
	printf("Enter the num:\n");
	scanf("%d",&num);
	for(i=2;i<num;i++)
	{
		if(num%i==0)
			cnt++;
	}
		if(cnt==0)
			printf("%d is prime number\n",num);
		else
			printf("%d is not prime number\n",num);
}
*/
//Qtion 1
int main()
{
	int num,pos,choice;
	int bit=31;
	printf("Enter the number:\n");
	scanf("%d",&num);
	printf("Enter the position:\n");
	scanf("%d",&pos);
	printf("1 for clear bit\n");
	printf("2 for set bit\n");
	printf("3 for toggle bit\n");
	printf("4 for binary op\n");
input: printf("Enter the choice:\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("%d\n",num=num&~(1<<pos));
		       break;
		case 2:printf("%d\n",num=num|(1<<pos));
		       break;
		case 3:printf("%d\n",num=num^(1<<pos));
		       break;
		case 4:for(bit=31;bit>=0;bit--)
			       printf("%d",((num>>bit)&1));
		       printf("\n");
		       break;
		default:printf("Error: invalid choice\n");
			goto  input;
	}
}

