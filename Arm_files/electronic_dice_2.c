#include<LPC21xx.h>
#include<stdlib.h>
#include "types.h"
#include "delay.h"

#define leds_al 8//@p0.8 t0o p0.15
#define sw_al 0//@p0.0
main()
{
	u32 face,seed=1;
	//cfg leds al as gpio as output
	IODIR0|=255<<leds_al;
	while(1)
	{
		if(((IOPIN0>>sw_al)&1)==0)
		{
			srand(seed++);
			face=(rand()%6)+1;
			IOPIN0=((IOPIN0&~(255<<leds_al))|(face<<leds_al));
			delay_ms(100);
		}
	}
}
