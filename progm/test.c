#include<stdio.h>
#include<stdlib.h>
void f1(void);
void f2(void);
int f0()
{
	printf("hello from f0\n");
	f1();
	printf("in f0\n");
	f2();
	printf("in f0\n");
	exit(0);
}
void f1(void)
{
	printf("hello from f1\n");
}
void f2(void)
{
	printf("hello from f2\n");
}
	
