#include<LPC21xx.h>
#include "types.h"
#include "delay.h"
#define led_al8 16//led @p0.7
main()
{	u32 i;
	//cfg direction	of led pin as gpio out
	IODIR0|=0xFF<<led_al8;
	//while(1)
	{
	for(i=0;i<=7;i++)
	{
		IOPIN0=((1<<i)^(0x0f))<<led_al8;
		delay_s(1);
	} 
	for(i=7;i>=0;i--)
	{
		IOPIN0=((1<<i)^(0x0f))<<led_al8;
		delay_s(1);
	} 
	}
	while(1);
}
