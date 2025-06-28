#include<LPC21xx.h>
#include "types.h"
#include "delay.h"
#define led_ah 7//led @p0.7
main()
{
	//cfg direction	of led pin as gpio out
	IODIR0|=1<<led_ah;
	while(1)
	{
		IOSET0=1<<led_ah;
		delay_ms(100);
		IOCLR0=1<<led_ah;
		delay_ms(100);
	}
}
