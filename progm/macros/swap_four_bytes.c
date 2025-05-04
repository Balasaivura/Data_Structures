#include<stdio.h>
#define swap_fourbytes(data) \
	((((data)>>24)&0x000000ff)|(((data)>>8)&0x0000ff00)| \
	(((data)<<8)&0x00ff0000)|(((data)<<24)&0xff000000))
int main()
{
	unsigned int value =0x12345678;
	printf("Before Swaping:%x\n",value);
	printf("After Swaping:%x\n",swap_fourbytes(value));
	return 0;
}
