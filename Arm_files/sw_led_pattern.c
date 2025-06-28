#include<LPC21xx.h>
#include "types.h"
#include "delay.h"
#include "defines.h"
#define led_al8 16//led @p0.16
#define sw_al1 4//@p0.4
#define sw_al2 5//@p0.5 
main()
{	u32 i,j;
	//cfg direction	of led pin as gpio out
	IODIR0|=0xFF<<led_al8;
	IOPIN0=(0x0f)<<led_al8;
	while(1)
	{
		while(((IOPIN0>>sw_al1)&1)==0);
		{	
			for(i=0;i<=7;i++)
			{
				IOPIN0=((1<<i)^(0x0f))<<led_al8;
				delay_ms(150);
			}
			IOPIN0=(0x0f)<<led_al8;
			while(READBIT(IOPIN0,sw_al1)==1);
		}
		while(((IOPIN0>>sw_al2)&1)==0);
		{
			for(j=7;j;j--)
			{
				IOPIN0=((1<<j)^(0x0f))<<led_al8;
				delay_ms(150);
			} 
			IOPIN0=(0x0f)<<led_al8;
			while(READBIT(IOPIN0,sw_al2)==1);
		}  
	}
}
