#include<LPC21xx.h>
#include "seg.h"
#include "types.h"
#include "delay.h"
#include "defines.h"
#define sw_al1 0//@p0.0
#define sw_al2 1//@p0.1
u32 cnt;
main()
{
	init_7segs();
	while(1)
	{
		if(((IOPIN0>>sw_al1)&1)==0)
		{
			cnt++;
			disp_seg(cnt);
			delay_ms(1000);
			while(READBIT(IOPIN0,sw_al1)==0);

		}
		if(((IOPIN0>>sw_al2)&1)==0)
		{
			cnt--;
			disp_seg(cnt);
			delay_ms(1000);
			while(READBIT(IOPIN0,sw_al2)==0);

		}
	 }
}
