//GPIO_generate_randomno_onPinLow.c
#include<LPC21xx.h>
#include"types.h"
#include"delay.h"
#include<stdlib.h>
#define IPIN 18//p0.0
#define opin_8 3//p0.8 to p0.15
main()
{
	u32 randno,seed=0;
	//cfg p0.8 to p0.15 as GPIO out
	IODIR0|=0x7<<opin_8;
	while(1)
	{
		if(((IOPIN1>>IPIN)&1)==0)
		{
			srand(seed++);
			randno=rand()%6+1;
			IOPIN0=randno<<opin_8;
			delay_ms(100);
		}
	}
}
