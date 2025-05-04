#include<stdio.h>
#include "add.c"
#include "sub.c"
int main()
{
	printf("res=%d",add(2,3));
	printf("res=%d",sub(20,3));
	return 0;
}
