#include <LPC21xx.h>
#include "types.h"
#include "defines.h"
#include "delay.h"
#include "seg.h"
#include "seg_defines.h"
const u8 pattern[]={0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
main()
{
	s32 i,j;
	WRITEBYTE(IODIR0,ca7seg_2mux,255);
	SETBIT(IODIR0,Dsel1);
	SETBIT(IODIR0,Dsel2);
	for(i=0;i<=8;i+=8)
	{
		//disp_mux_segs(i);
		//delay_s(1);
		WRITEBYTE(IOPIN0,ca7seg_2mux,pattern[i]);
		for(j=0;j<5;j++)
		{
			SSETBIT(IOSET0,Dsel1);
			SSETBIT(IOSET0,Dsel2);
			delay_s(1);
			SCLRBIT(IOCLR0,Dsel1);
			SCLRBIT(IOCLR0,Dsel2);
			delay_s(1);
			//disp_mux_segs(i);
			//delay_s(1);
		}	
	}
	while(1);
}
