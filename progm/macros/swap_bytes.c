#include<stdio.h>
#define swapbytes(a) (((a>>8)&0x00ff))|((a<<8)&0xff00|(a&0xffff0000))
int main()
{
	unsigned int value =0x12345678;
	printf("Before Swaping:%x\n",value);
	printf("After Swaping:%x\n",swapbytes(value));
	return 0;
}
