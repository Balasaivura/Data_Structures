#include"uart.h"
#include"lcd_defines.h"
#include"lcd.h"
#include "types.h"
#include<LPC21xx.h>
u32 i=0;
main()
{	u8 ch;
	Init_UART0();
	initlcd();
	//strlcd("UART_LCD");
	while(1)
	{	
	/*	if(i>16)
		{
			i=0;
			cmdlcd(GOTO_LINE2_POS0+i);
			strlcd("                ");
			i=0;
		}
		cmdlcd(GOTO_LINE2_POS0+i);
		i++;*/
		//cmdlcd(SHIFT_CUR_RIGHT);
		ch=U0_RxByte();
		charlcd(ch);  
		U0_TxByte(ch);
	}
}
