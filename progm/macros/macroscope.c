#include<stdio.h>
//#define add(a,b) a+b
void f1();
int main()
{
#define add(a,b) a+b
	printf("2+3=%d\n",add(2,3));
	f1();
}
void f1()
{
	printf("5+3=%d\n",add(5,3));
}
