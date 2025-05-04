#include<stdio.h>
#define PRINT(x) printf(#x"=%d\n",x)
int main()
{
	int a=10,b=20,c=30;
	PRINT(a);
	PRINT(b);
	PRINT(c);
	return 0;
}
