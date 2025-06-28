//gpio.c
#include "types.h"
#include<LPC21xx.h>
#include "gpio_defines.h"
#include "defines.h"
void pinmode(u32 pinno,u32 pinfunc)
{
	if((pinno<=31))
		(pinfunc==OUTPUT)?(IODIR0|=1<<pinno):(IODIR0&=~(1<<pinno));
	else if((pinno>=32)&&(pinno<=45))
		(pinfunc==OUTPUT)?(IODIR1|=1<<pinno):(IODIR1&=~(1<<pinno));
}
void digitalwrite(u32 pinno,u32 bit)
{
	if((pinno<=31))
		WRITEBIT(IOPIN0,pinno,bit);
	else if((pinno>=32)&&(pinno<=47))
		WRITEBIT(IOPIN1,(pinno-16),bit);
}
u32 digitalread(u32 pinno)
{
	u32 bit;
	if((pinno<=31))
		bit=READBIT(IOPIN0,pinno);
	else if((pinno>=32)&&(pinno<=47))
		bit=READBIT(IOPIN1,(pinno-16));
		return bit;
}
