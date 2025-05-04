/*#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter any two numbers : ");
	scanf("%d %d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("a =%d, b=%d",a,b);
	return 0;
}
*/

#include<stdio.h>
int main()
{
	int a,b;
	printf("enter any two numbers :");
	scanf("%d %d",&a,&b);
	//a=a*2;b=a/2;b=b*2;a=b/2;b=a/2;
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a= %d, b= %d",a,b);
	return 0;
}
