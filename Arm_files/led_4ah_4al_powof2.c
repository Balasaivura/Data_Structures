#include<LPC21xx.h>
#include "types.h"
#include "delay.h"
#define leds_4ah 4
#define leds_4al 4
#define leds_4ah_4al 8
main()
{
	u32 i;
	//cfg directon of leds as gpio out
	IODIR0|=0xff<<leds_4ah_4al;
	for(i=0;i<=7;i++)
	{
		//IOPIN0=((1<<i)^0x0f)<<leds_4ah_4al;
		IOPIN0=((1<<i)^0xf0)<<leds_4ah_4al;
		delay_ms(500);
	}
	while(1);
}
