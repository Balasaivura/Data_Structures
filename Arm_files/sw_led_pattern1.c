#include<LPC21xx.h>
#include "types.h"
#include "delay.h"
#include "defines.h"
#define led_al8 16//led @p0.16
#define sw_al1 4//@p0.4
#define sw_al2 5//@p0.5
#define sw_al3 6//@p0.4
#define sw_al4 7//@p0.5 
main()
{
	//cfg direction	of led pin as gpio out
	IODIR0|=0xFF<<led_al8;
	while(1)
	{
		IOPIN0=(0x0f)<<led_al8;
		if(((IOPIN0>>sw_al1)&1)==0)
		{
			IOPIN0=0x8e<<led_al8;
		}
		if(((IOPIN0>>sw_al2)&1)==0)
		{
			IOPIN0=0x4d<<led_al8;
		}
		if(((IOPIN0>>sw_al3)&1)==0)
		{
			IOPIN0=0x2b<<led_al8;
		}
		if(((IOPIN0>>sw_al4)&1)==0)
		{
			IOPIN0=0x17<<led_al8;
		}  
	}
}
