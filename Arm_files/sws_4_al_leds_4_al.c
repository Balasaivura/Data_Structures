#include<LPC21xx.h>
#include "gpio_defines.h"
#include "gpio.h"
#define sws_4_al 0	 //from p0.0 to p0.3
#define leds_4_al 4 //from p0.4 to p0.7
main()
{
	//cfg leds pins as gpio out
	IODIR0|=15<<leds_4_al;
	while(1)
	{
		IOPIN0=((IOPIN0&~(15<<leds_4_al))|((IOPIN0>>sws_4_al)&15)<<leds_4_al);
	}
}
