//sw_led_0to255.c
#include<LPC21XX.h>
#include "types.h"
#include "delay.h"
#include "defines.h"
#include "led.h"
#include "leds_define.h"
#define led1_al 16//@p0.16 to p0.24
#define sw_al1 4//@p0.4
u32 i;
main()
{
	
	//cfg direction of p0.7 pin as output
	//init_leds();
	IODIR0=255<<led1_al;
	IOPIN0=(0x0f)<<led1_al;	
	for(i=0;i<=255;i++)
	{	
		while(((IOPIN0>>sw_al1)&1)==0);
			//IOPIN0= ((IOPIN0&~255<<led1_al)|((cnt^0x0f)<<led1_al));
			delay_ms(500);
			IOPIN0= ((i^0x0f)<<led1_al);
			//disp_bin_leds(cnt<<led1_al);
			while(READBIT(IOPIN0,sw_al1)==1);
	
	}
	while(1);
}
