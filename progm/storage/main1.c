#include<stdio.h>
static int x=10;//it is accessable with in the file only
//int x=10;//it will access outside & inside of file
void inc(void);
int main()
{
	inc();
	inc();
	inc();
	printf("x=%d\n",x);//13
}

