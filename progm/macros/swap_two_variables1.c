#include<stdio.h>
#define swap(a,b) temp=a; a=b; b=temp;
int main()
{
	int a=89,b=41,temp=0;
	printf("Before swaping a=%d, b=%d\n",a,b);
	swap(a,b);
	printf("After swaping a=%d, b=%d\n",a,b);
}
