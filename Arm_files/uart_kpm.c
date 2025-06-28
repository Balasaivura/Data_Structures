#include"uart.h"
#include"seg.h"
#include "types.h"
#include<LPC21xx.h>
u32 i=0;
main()
{	u32 ch=0;
	Init_UART0();
	init_7segs();
	disp_seg(ch);
	while(1)
	{	
		ch=U0_RxByte();
		disp_seg(ch);  
		U0_TxByte(ch);
	}
}
