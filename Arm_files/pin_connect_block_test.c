#include<LPC21XX.h>
#define PIN_FUN1 0
#define PIN_FUN2 1
#define PIN_FUN3 2
#define PIN_FUN4 3
main()
{
//cfg p0.0 pin for fun 4
PINSEL0=PIN_FUN4<<0;
//cfg p0.7 pin for fun 3
PINSEL0|=PIN_FUN3<<14;
//cfg p0.8 pin for fun2
PINSEL0|=PIN_FUN2<<16;
//PINSEL0=0;
while(1);
}
