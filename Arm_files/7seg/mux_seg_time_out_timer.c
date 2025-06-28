#include"seg.h"
#include"types.h"
#include"delay.h"
#include"seg_defines.h"
#include<LPC21xx.h>

#define RST_SW 16
#define INC_SW 17
#define DEC_SW 18
#define TRIG_SW 19
main()
{
 	s32 count=0,delay;
	init_mux7segs();
	while(1)
	{
		disp_mux_segs(count);
		if(((IOPIN1>>INC_SW)&1)==0)
		{
			count++;
			if(count>59)
				count=0;
			while(((IOPIN1>>INC_SW)&1)==0)
			{
				disp_mux_segs(count);
			}
		}
	else if(((IOPIN1>>DEC_SW)&1)==0)
	{
		count--;
		if(count<0)
			count=59;
		while(((IOPIN1>>DEC_SW)&1)==0)
		{
			disp_mux_segs(count);
		}
	}
	else if(((IOPIN1>>TRIG_SW)&1)==0)
	{
		while(count>0)
		{
			while(((IOPIN1>>TRIG_SW)&1)==0)
			{
				disp_mux_segs(count);
			}
			for(delay=500;delay>0;delay--)
			{
				disp_mux_segs(count);
			}
			count--;
		}
	}
	else if(((IOPIN1>>RST_SW)&1)==0)
	{
		count=0;
		while(((IOPIN1>>RST_SW)&1)==0)
		{
			disp_mux_segs(count);
		}
	}
	}
}
