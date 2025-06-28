#include<LPC21XX.h>
#include "types.h"
#include "delay.h"
#define opin 7
main()
{
//cfg direction of p0.7 pin as output
IODIR0|=1<<opin;
while(1)
{
IOSET0=1<<opin;
delay_s(1);
IOCLR0=1<<opin;
delay_s(1);
}
}
