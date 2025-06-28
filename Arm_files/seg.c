#include<LPC21xx.h>
#include "types.h"
#include "seg_defines.h"
#include "delay.h"
#include "defines.h"
u8 pattern[]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
void init_mux7segs(void)
{
	//cfg seg pins a to dp as gpio out
	WRITEBYTE(IODIR0,ca7seg_2mux,255);
	//cfg digit
	SETBIT(IODIR0,Dsel1);
	SETBIT(IODIR0,Dsel2);
}
void disp_mux_segs(u8 num)
{
	//write first digit onto data pins
	WRITEBYTE(IOPIN0,ca7seg_2mux,pattern[num/10]);
	//turn on the seg1
	SETBIT(IOPIN0,Dsel1);
	//let it be on for 1ms
	delay_ms(1);
	//turn off the seg1
	CLRBIT(IOPIN0,Dsel1);

	//write first digit onto data pins
	WRITEBYTE(IOPIN0,ca7seg_2mux,pattern[num%10]);
	//turn on the seg1
	SETBIT(IOPIN0,Dsel2);
	//let it be on for 1ms
	delay_ms(1);
	//turn off the seg2
	CLRBIT(IOPIN0,Dsel2);
}
void disp_seg(u32 num)
{
	WRITEBYTE(IOPIN0,ca7seg,pattern[num]);
}
void init_7segs(void)
{
	//cfg p0.8 to p0.15
	WRITEBYTE(IODIR0,ca7seg,255);
}
