//led.c
#include<LPC21xx.h>
#include "types.h"
#include "defines.h"
#include "leds_define.h"
void init_leds()
{
	//cfg direction of led pins as gpio out
	IODIR0|=1<<led1_al|1<<led2_al|1<<led3_al|1<<led4_al|1<<led5_al|1<<led6_al|1<<led7_al|1<<led8_al;
}
void disp_bin_leds(u8 num)
{
	
	WRITEBIT(IOPIN0,led1_al,!READBIT(num,0));
	WRITEBIT(IOPIN0,led2_al,!READBIT(num,1));
	WRITEBIT(IOPIN0,led3_al,!READBIT(num,2));
	WRITEBIT(IOPIN0,led4_al,!READBIT(num,3));
	WRITEBIT(IOPIN0,led5_al,READBIT(num,4));
	WRITEBIT(IOPIN0,led6_al,READBIT(num,5));
	WRITEBIT(IOPIN0,led7_al,READBIT(num,6));
	WRITEBIT(IOPIN0,led8_al,READBIT(num,7));
}
