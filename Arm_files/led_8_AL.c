#include<LPC21xx.h>
#include "types.h"
#include "delay.h"
#define led_al8 8//led @p0.7
main()
{	u32 i;
	//cfg direction	of led pin as gpio out
	IODIR0|=0xFF<<led_al8;
	for(i=0;i<=7;i++)
	{
		IOPIN0=~(1<<i)<<led_al8;
		delay_ms(500);
	}
	while(1);
}
