#include<LPC21xx.h>
#include"seg.h"
#include"delay.h"
#include<stdlib.h>
#define roll_sw 7//@p0.7
main()
{
	u32 face,seed=1;
	init_7segs();
	disp_seg(0);
	while(1)
	{
		if(((IOPIN0>>roll_sw)&1)==0)
		{
			face=(rand()%6)+1;
			srand(seed++);
			disp_seg(face);
			delay_ms(50);
		}
	}
}
