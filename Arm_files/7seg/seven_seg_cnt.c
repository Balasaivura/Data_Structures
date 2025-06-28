#include<LPC21xx.h>
#include "types.h"
#include "defines.h"
#include "delay.h"
#include "led.h"
#define sw_al 2
u8 pattern[]={0xff,0x00,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90,0xff};
main()
{
	u32 i;
	init_leds();
	for(i=0;i<=11;i++)
	{
		//if(((IOPIN0>>sw_al)&1)==0)
		//{
			disp_bin_leds(pattern[i]);
		//}
		delay_ms(1000);
	}
while(1);
}    
