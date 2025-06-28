#include<LPC21XX.h>
#include "types.h"
#include "seg.h"
#include "delay.h"
#include "defines.h"
#define size 12
#define sw_al1 1
u32 fib[size];
main()
{
	s32 i;
	u32 j,k;
	u32 a=0,b=1,c;
	init_mux7segs();
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
		{	//disp_mux_segs(fib[i]);
			if(((IOPIN0>>sw_al1)&1)==0)
			{
				for(k=0;k<=12;k++)
				{
					for(j=1000;j>0;j--)
					{
						disp_mux_segs(fib[k]);
					}
					while(READBIT(IOPIN0,sw_al1)==0);
				}
			}
		}
 }
