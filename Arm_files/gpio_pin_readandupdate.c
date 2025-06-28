#include<LPC21xx.h>
#include"types.h"
#define IPIN 0//p0.0
u32 Pinstatus __attribute__((at(0x40000010)));
main()
{
	while(1)
	{
		Pinstatus=((IOPIN0>>IPIN)&1);
	}
}
