#include<LPC21xx.h>
#include"types.h"
#include"delay.h"
#define led1_ah 16
#define led2_ah 17
#define	led3_ah 18
#define led4_ah 19
#define led5_ah 20
#define led6_ah 21
#define led7_ah 22
#define led8_ah 23
main()
{
	u32 i;
	//cfg direction of led pins as gpio output
	IODIR1|=1<<led1_ah|1<<led2_ah|1<<led3_ah|1<<led4_ah|1<<led5_ah;
	IODIR1|=1<<led6_ah|1<<led7_ah|1<<led8_ah;
	for(i=0;i<=7;i++)
	{
		IOPIN1=(IOPIN1&~(1<<led1_ah))|(((1<<i)>>0)&1)<<(led1_ah);
		IOPIN1=(IOPIN1&~(1<<led2_ah))|(((1<<i)>>1)&1)<<(led2_ah);
		IOPIN1=(IOPIN1&~(1<<led3_ah))|(((1<<i)>>2)&1)<<(led3_ah);
		IOPIN1=(IOPIN1&~(1<<led4_ah))|(((1<<i)>>3)&1)<<(led4_ah);
		IOPIN1=(IOPIN1&~(1<<led5_ah))|(((1<<i)>>4)&1)<<(led5_ah);
		IOPIN1=(IOPIN1&~(1<<led6_ah))|(((1<<i)>>5)&1)<<(led6_ah);
		IOPIN1=(IOPIN1&~(1<<led7_ah))|(((1<<i)>>6)&1)<<(led7_ah);
		IOPIN1=(IOPIN1&~(1<<led8_ah))|(((1<<i)>>7)&1)<<(led8_ah);
		delay_ms(500);
	}
	while(1);
}
