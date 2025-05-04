#include<stdio.h>
int i;
static void inc(void)
{
	i++;
}
int main()
{
	inc();
	inc();
	inc();
	printf("i=%d\n",i);//3
}

