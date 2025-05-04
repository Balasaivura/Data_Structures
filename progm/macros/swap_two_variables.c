#include<stdio.h>
#define swap(a,b) a=a+b; b=a-b; a=a-b;
//#define swap(a,b) a^=b; b^=a; a^=b;
int main()
{
	int a=89,b=41;
	printf("Before swaping a=%d, b=%d\n",a,b);
	swap(a,b);
	printf("After swaping a=%d, b=%d\n",a,b);
}
