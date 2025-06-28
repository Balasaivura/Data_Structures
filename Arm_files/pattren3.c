#include<LPC21xx.h>
#include "types.h"
#include "defines.h"
#include "delay.h"
#include "led.h"
u8 pattern[]={0x0f,0x8E,0x4D,0x2B,0x17,0x0f,0x17,0x2B,0x4D,0x8E,0x0f};
main()
{
	u32 i;
	init_leds();
	for(i=0;i<=10;i++)
	{
		disp_bin_leds(pattern[i]);
		delay_ms(1000);
	}
while(1);
}
