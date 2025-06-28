#include<LPC21xx.h>
#include "seg.h"
#include "types.h"
#include "delay.h"
#include "defines.h"
#define sw_ah 0//@p0.0
u32 cnt;
main()
{
	init_7segs();
	while(1)
	{
		if(((IOPIN0>>sw_ah)&1)==1)
		{
			cnt++;
			disp_seg(cnt);
			delay_ms(1000);
			while(READBIT(IOPIN0,sw_ah)==1);

		}
	 }
}
