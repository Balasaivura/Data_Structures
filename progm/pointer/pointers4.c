#include<stdio.h>

/*void main()
{
	volatile static const int x=10;
	int *ptr=&x;
	++*ptr;
	printf("%d\n",x);//it is possible only in some compilers
}


void main()
{
	const int x=10;
	++x;// we can't modify the const variable but with using pointer it is possible 
	printf("%d\n",x);//error
}


void main()
{
	const int x=10;
	int *ptr=&x;
	++*ptr;
	printf("%d\n",x);//11
}


void fun(int *);
void main()
{
	int x=50;
	++x;
	fun(&x);
	printf("%d\n",x);//53
}
void fun(int *x)
{
	++*x;
	++*x;
	printf("%d\n",x);//adress of x
}


void main()
{
	int x=50;
	++x;
	fun(x);
	printf("%d\n",x);//51
}
void fun(int x)
{
	++x;
	++x;
	printf("%d\n",x);//53
}*/
