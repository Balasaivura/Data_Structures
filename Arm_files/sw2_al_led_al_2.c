//sw2_al_led_al_2.c
#include<LPC21xx.h>
#include "gpio_defines.h"
#include "gpio.h"
#define sw1_al 0//@p0.0
#define sw2_al 1//@p0.1
#define led_al 4//@p0.4
main()
{
	//cfg led pin as gpio output
	pinmode(led_al,OUTPUT);
	while(1)
	{
		dw(led_al,(dr(sw1_al)&dr(sw2_al)));
	}
}
