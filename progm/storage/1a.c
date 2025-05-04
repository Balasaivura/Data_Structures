#include<stdio.h>
/*
// extern void fun(int);
void fun(int);//by default functions are extern only.
void main()
{
	int x=100;
	fun(x);
	printf("x=%d\n",x);
}
*/

extern int x;
void main()
{
        int y=100;
        fun(y);
        printf("x=%d\n",x);
}

