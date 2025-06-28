#include<LPC21XX.h>
#include "types.h"
#include "delay.h"
#include "defines.h"
#define size 12
#define led_al8 16//led @p0.16
#define sw_al1 4//@p0.4
u32 fib[size];
main()
{
	s32 i;
	u32 k,j;
	u32 a=0,b=1,c;
	//cfg direction	of led pin as gpio out
	IODIR0|=0xFF<<led_al8;
	for(i=0;i<size;i++)
	{
		if(i==0)
		{
			fib[i]=a;
		}
		else if(i==1)
		{
			fib[i]=b;
		}
		else
		{
			c=a+b;
			fib[i]=c;
 			a=b;
 			b=c;
 		}
 		delay_ms(500);
 		}
 		while(1)
		{	
			while(((IOPIN0>>sw_al1)&1)==0)
			{
				for(k=0;k<=12;k++)
				{
					IOPIN0=((1<<fib[k])^(0x0f))<<led_al8;
					while(READBIT(IOPIN0,sw_al1)==1);
				}
			}
		}
 }
