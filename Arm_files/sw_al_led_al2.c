//SW_AL_LED_AL_2.C
#include<LPC21xx.h>
#define sw_al 0 //@p0.0
#define led_al 4 //@p0.4
#define pressed 0
main()
{
	//cfg gpio pin of led as output pin
	IODIR0|=1<<led_al;
	while(1)
	{
		!((IOPIN0>>sw_al)&1)?
			IOPIN0&=~(1<<led_al):
			IOPIN0|=1<<led_al;
	}
}
