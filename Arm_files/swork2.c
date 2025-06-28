#include<LPC21xx.h>
#define pins_no 8
#include "delay.h"
#include "types.h"
#define READBYTE(WORD,BITPOS) \
		((WORD>>BITPOS)&255)
#define WRITEBYTE(WORD,BITPOS,BYTE) \
		WORD=((WORD&~(255<<BITPOS))|(BYTE<<BITPOS))

u32 isprime(u32 n)
{
	u32 v;
	for(v=2;v<n;v++)
	{
		if(n%v==0)
		{
			break;
		}
	}
	if(n==v)
		return 1;
	else
		return 0;
}

	
main()
{
	u32 i;
	IODIR0|=255<<pins_no;
	for(i=0;i<256;i++)
	{
		//IOPIN0=i<<pins_no;
		if(isprime(i)==1)
		{
			WRITEBYTE(IOPIN0,pins_no,i);
			delay_ms(500);
		}
	}
	while(1);
}
