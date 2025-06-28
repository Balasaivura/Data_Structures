#include"uart.h"
#include"seg.h"
#include"lcd.h"
#include "types.h"
#include"defines.h"
#include<LPC21xx.h>
#define sw1 3
u8 ch=0;
u32 i=0;
main()
{	
	 PINSEL0=0x000000C0;
	Init_UART0();
  while(1)
  {
  	while(i<26)
	{
	  if(((IOPIN0>>sw1)&1)==0)
		{
			U0_TxByte((u8)(i+97));
			i++;
			//delay_ms(500);
			while(READBIT(IOPIN0,sw1)==0);
		}
	}
	/*while(1)
	{	
		ch=(u32)U0_RxByte();
		U32lcd(ch);
		//disp_seg(ch);  
		U0_TxByte(ch);
		U0_TxByte(
	} */
  }
}
