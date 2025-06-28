#include<LPC21xx.h>
#include"types.h"
#include"delay.h"
#define opin1 0
#define opin2 3
#define opin3 4
#define opin4 7
main()
{
	//cfg direction of p0.0,p0.3,p0.4,p0.7 pins as output
	//IODIR0|=1<<opin4|1<<opin3|1<<opin2|1<<opin1;
	IODIR0|=0x99;
	while(1)
	{
		//IOPIN0^=1<<opin4|1<<opin3|1<<opin2|1<<opin1;
		IOPIN0^=0x99;
		delay_ms(100);
	}
}
