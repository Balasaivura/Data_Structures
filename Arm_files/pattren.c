#include<LPC21xx.h>
#include "types.h"
#include "defines.h"
#include "delay.h"
#include "led.h"
u8 pattern[]={0x00,0x81,0x42,0x24,0x18,0x24,0x42,0x81};
main()
{
	u32 i;
	init_leds();
	for(i=0;i<=7;i++)
	{
		disp_bin_leds(pattern[i]);
		delay_ms(1000);
	}
while(1);
}
