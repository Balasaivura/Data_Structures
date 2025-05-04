#include<stdio.h>
int main()
{
	int num,temp,res=0,digit,fa=1;
	printf("Enter the number\n");
	scanf("%d",&num);
	temp=num;
	while(temp)
	{
		digit=temp%10;
		if(digit==0)
			digit=1;
		res=digit*fa+res;
		fa*=10;
		temp/=10;
	}
	printf("the replaced one's number is %d\n",res);
}
