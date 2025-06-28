//leds_8_al_dispersed3.c
#include"types.h"
#include"led.h"
#include"delay.h"
main()
{	
	u32 i;
	init_leds();
	for(i=0;i<=255;i++)
	{
		disp_bin_leds(i<<1);
		delay_ms(500);
	}
	while(1);
}
