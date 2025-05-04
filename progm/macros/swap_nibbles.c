#include<stdio.h>
#define swap_nibbles(data) ((data>>4)|(data<<4))
int main()
{
	unsigned int a=0x36;
	printf("Before swaping a=%x\n",a);
	a=swap_nibbles(a);
	printf("After Swaping a=%x\n",a);
	return 0;
}
