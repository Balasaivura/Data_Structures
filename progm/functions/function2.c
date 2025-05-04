#include<stdio.h>
/*void fun(int);
void main()
{
	int a=5;
	fun(a++);
	printf("a=%d\n",a);
}
void fun(int a)
{
	a++;
}


void fun(void);
int a=5;
void main()
{
	fun();
	printf("a=%d\n",a);
}
void fun(void)
{
	a++;
}
*/

int fun(void);
int a=5;
void main()
{
	int res=fun();
	printf("res=%d\n",res);
}
int fun(void)
{
	printf("hello2345");
}

