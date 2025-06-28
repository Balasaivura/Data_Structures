//GPIO_generate_randomno_onPinLow.c
#include<LPC21xx.h>
#include"types.h"
#include<stdlib.h>
#define IPIN 0//p0.0
#define opin_8 8//p0.8 to p0.15
main()
{
	u32 randno,seed=0;
	//cfg p0.8 to p0.15 as GPIO out
	IODIR0|=0xFF<<opin_8;
	while(1)
	{
		if(((IOPIN0>>IPIN)&1)==0)
		{
			srand(seed++);
			randno=rand()%256;
			IOPIN0=randno<<opin_8;
			while(((IOPIN0>>IPIN)&1)==0);
		}
	}
}
