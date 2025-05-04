#include<stdio.h>
int main()
{
	int a;
	scanf("%x",&a);
	char *ptr =&a;
	printf("%x",*ptr);
	++ptr;
	printf("%x",*ptr);
}
