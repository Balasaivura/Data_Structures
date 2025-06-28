//gpio_pins_0to255_at100ms.c
#include<LPC21XX.h>
#include "types.h"
#include "delay.h"
#define opins_8 16 //p0.8 to p0.15
main()
{
u32 i;
//cfg direction of p0.7 pin as output
IODIR0|=255<<opins_8;
//IODIR0=0xff;
for(i=0;i<256;i++)
{
IOPIN0=(0x0f)^i<<opins_8;
delay_ms(250);
}
while(1);
}
