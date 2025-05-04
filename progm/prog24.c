#include<stdio.h>
int main()
{
	int a,b,res;
	printf("Enter 2  integers:");
	scanf("%d %d",&a,&b);
	res=a+b;
	printf("Addition of %d + %d=%d\n",a,b,res);
	res=a-b;
	printf("Subtraction of %d - %d=%d\n",a,b,res);
	res=a*b;
	printf("Multiplicatiion of %d * %d=%d\n",a,b,res);
	res=a/b;
	printf("Division of %d / %d=%f\n",a,b,(float)res);//quetionent
	res=a%b;
	printf("Modulos of %d  %d=%f\n",a,b,(float)res);//reminder
	return 0;
}
