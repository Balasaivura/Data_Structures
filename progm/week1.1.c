#include<stdio.h>
//Qtion 2
/*int main()
{
	int num,bit,cnt=0;
	printf("Enter the number:");
	scanf("%d",&num);
	for(bit=31;bit>=0;bit--)
	{
		if((num>>bit)&1)
			cnt++;
	}
	if(cnt%2==0)
		printf("%d Even\n",cnt);
	else
		printf("%d Odd\n",cnt);
}
*/
int main()
{
	int a,b,choice;
	printf("Enter a & b values:\n");
	scanf("%d %d",&a,&b);
	printf("1 for Addition\n");
	printf("2 for Subtration\n");
	printf("3 for Multiplication\n");
	printf("4 for Division\n");
input:  printf("Enter the choice:\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("%d\n",a+b);
		       break;
		case 2:printf("%d\n",a-b);
		       break;
		case 3:printf("%d\n",a*b);
		       break;
		case 4:printf("%d\n",a/b);
		       break;
		default:printf("Error: Inavlid choice\n");
			goto input;
	}
}
