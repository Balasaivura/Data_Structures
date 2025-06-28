#include<LPC21xx.h>
#include"types.h"
#include"delay.h"
main()
{	  u32 i;
	IODIR0=0xFFFFFFFF;
	for(i=0;i<10;i++)
	{
		IOSET0=0XFFFFFFFF;
		delay_s(1);
		IOCLR0=0XFFFFFFFF;
		delay_s(1);
	}
	while(1);
}
