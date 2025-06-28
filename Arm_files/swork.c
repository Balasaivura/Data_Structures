#include<LPC21xx.h>
#define pins_no 8
#include "delay.h"
#include "types.h"
#define READBYTE(WORD,BITPOS) \
		((WORD>>BITPOS)&255)
#define WRITEBYTE(WORD,BITPOS,BYTE) \
		WORD=((WORD&~(255<<BITPOS))|(BYTE<<BITPOS))

main()
{
	u32 i;
	IODIR0|=255<<pins_no;
	for(i=0;i<256;i++)
	{
		//IOPIN0=i<<pins_no;
		WRITEBYTE(IOPIN0,pins_no,i);
		delay_ms(500);
	}
	while(1);
}
