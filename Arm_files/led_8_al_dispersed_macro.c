#include<lpc21xx.h>
#include "types.h"
#include "delay.h"
#define led1_al 16
#define led2_al 17
#define led3_al 18
#define led4_al 19
#define led5_al 20
#define led6_al 21
#define led7_al 22
#define led8_al 23

#define READBIT(WORD,BITPOS)     \
		((WORD>>BITPOS)&1)
#define WRITEBIT(WORD,BITPOS,BIT)  \
		WORD=((WORD&~(1<<BITPOS))|(BIT<<BITPOS))

main()
{
	u32 i;
	//cfg led pins as gpio out
	IODIR1|=1<<led1_al|1<<led2_al|1<<led3_al|1<<led4_al|1<<led5_al|1<<led6_al|1<<led7_al|1<<led8_al;

	for(i=0;i<=7;i++)
	{
		WRITEBIT(IOPIN1,led1_al,!READBIT((1<<i),0));
		WRITEBIT(IOPIN1,led2_al,!READBIT((1<<i),1));
		WRITEBIT(IOPIN1,led3_al,!READBIT((1<<i),2));
		WRITEBIT(IOPIN1,led4_al,!READBIT((1<<i),3));
		WRITEBIT(IOPIN1,led5_al,!READBIT((1<<i),4));
		WRITEBIT(IOPIN1,led6_al,!READBIT((1<<i),5));
		WRITEBIT(IOPIN1,led7_al,!READBIT((1<<i),6));
		WRITEBIT(IOPIN1,led8_al,!READBIT((1<<i),7));
		delay_ms(500);
	}
	while(1);
}
