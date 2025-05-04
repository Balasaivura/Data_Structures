#include<stdio.h>
/*
int x=100;// by default it is consider as extern storage class
//x=100;// it will gives sometime an error better not to use like this
void main()
{
	printf("x=%d\n",x);
	fun();
}
void fun(void)
{
	printf("x=%d\n",x);
}
*/


void fun(void);//function declaration
extern int x;// it is the proper usage of extern do not initialize any value here.
void main()
{
        printf("x=%d\n",x);
        fun();
}
void fun(void)
{
        printf("x=%d\n",x);
}
x=50;
