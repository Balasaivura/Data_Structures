#include<stdio.h>
int main()
{
	char v1 = 'A';
	char v2;
	putchar(v1);
	putchar(v2);
	v2 = v1+32;
	++v1;
	putchar(v1);
	putchar(v2);
	return 0;
}
