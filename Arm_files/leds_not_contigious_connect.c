#include<LPC21xx.h>
#include "types.h"
#include "delay.h"
#define led1_ah 2
#define led2_ah 4
#define led3_ah 5
#define led4_ah 7
#define led5_ah 8
#define led6_ah 16
#define led7_ah 17
#define led8_ah 20
main()
{
	u32 i;
	//cfg direction of led pins as gpio out
	IODIR0|=1<<led1_ah|1<<led2_ah|1<<led3_ah|1<<led4_ah|1<<led5_ah;
	IODIR1|=1<<led6_ah|1<<led7_ah|1<<led8_ah;
	for(i=0;i<=7;i++)
	{
		IOPIN0=(IOPIN0&~(1<<led1_ah))|(((1<<i)>>0)&1)<<(led1_ah);
		IOPIN0=(IOPIN0&~(1<<led2_ah))|(((1<<i)>>1)&1)<<(led2_ah);
		IOPIN0=(IOPIN0&~(1<<led3_ah))|(((1<<i)>>2)&1)<<(led3_ah);
		IOPIN0=(IOPIN0&~(1<<led4_ah))|(((1<<i)>>3)&1)<<(led4_ah);
		IOPIN0=(IOPIN0&~(1<<led5_ah))|(((1<<i)>>4)&1)<<(led5_ah);
		IOPIN1=(IOPIN1&~(1<<led6_ah))|(((1<<i)>>5)&1)<<(led6_ah);
		IOPIN1=(IOPIN1&~(1<<led7_ah))|(((1<<i)>>6)&1)<<(led7_ah);
		IOPIN1=(IOPIN1&~(1<<led8_ah))|(((1<<i)>>7)&1)<<(led8_ah);
		delay_ms(500);
		//IOPIN0|=(((1<<i)>>1)&1)<<led1_ah|(((1<<i)>>2)&1)<<led2_ah|(((1<<i)>>3)&1)<<led3_ah|(((1<<i)>>4)&1)<<led4_ah|(((1<<i)>>5)&1)<<led5_ah;
	}
	/*for(i=0;i<=7;i++)
	{	
		IOPIN1|=(((1<<i)>>1)&1)<<led6_ah|(((1<<i)>>2)&1)<<led7_ah|(((1<<i)>>3)&1)<<led8_ah;
		//IOPIN0|=(((1<<i)>>0)&1)<<led2_ah;
		//IOPIN0|=(((1<<i)>>0)&1)<<led3_ah;
		//IOPIN0|=(((1<<i)>>0)&1)<<led4_ah;
		//IOPIN0|=(((1<<i)>>0)&1)<<led5_ah;
		delay_ms(500);
	} */
	while(1);
}
