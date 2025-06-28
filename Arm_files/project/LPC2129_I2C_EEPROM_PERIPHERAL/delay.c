#include "types.h"
void delay_ms(u32 dlyms)
{
//@cclk=60Mhz
for(dlyms*=12000;dlyms>0;dlyms--);
}
 void delay_us(u32 dlyus)
{
//@cclk=60Mhz
for(dlyus*=12;dlyus>0;dlyus--);
}
