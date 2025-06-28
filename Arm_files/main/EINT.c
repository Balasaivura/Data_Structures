
#include "defines.h"
#include <lpc21xx.h>
#include "types.h"
#include "lcd.h"
#include "rtc.h"
#include "eint.h"
#include "kpm.h"
#include "delay.h"
void Enable_EINT0(void)
{

	//SETBIT(IODIR0,EINT0_LED);

	CFGPIN(PINSEL0,3,3);//p0.3

	//VICIntSelect=0;

	VICIntEnable=1<<15;

	VICVectCntl1=0x20|15;

	VICVectAddr1=(u32)eint0_isr;
		
	EXTINT=0<<1;

	EXTMODE=0x01;

	//EXTPOLAR=0;

}
void eint0_isr(void) __irq

{
	int ch;
SET:
	CmdLCD(0x01);
	StrLCD("choose to edit");
	CmdLCD(0xc0);
	StrLCD("1.TIME 2.DATE");
	//delay_ms(1000);
	//CmdLCD(0x01);
	//while(ColScan()==0);
	while((READNIBBLE(IOPIN1,COL0)==15));
	CmdLCD(0x01);
	ch=KeyScan();
	//U32LCD(ch);
	U32LCD(ch);
	//delay_ms(200);
	switch(ch)
	{
	case 1: CmdLCD(0x01);
		       StrLCD("HOUR:");
	        HOUR=SetHour();
		CmdLCD(0x01);
		    StrLCD("MIN:");
		    //CmdLCD(0x01);
	        MIN=SetMin();
		CmdLCD(0x01);
			SEC=0;
			StrLCD("TIME SET");
			delay_ms(500);
			break;
	         
	case 2:	CmdLCD(0x01);
		StrLCD("DAY:");
			//CmdLCD(0xc0);
	        DOM=SetDay();
		CmdLCD(0x01);
		StrLCD("MONTH:");
	        MONTH=SetMonth();
					CmdLCD(0x01);
			YEAR=24;
			StrLCD("DATE SET");
			delay_ms(500);
			break;
	default: CmdLCD(0x01);
	      StrLCD("Incorrect input");
		  delay_ms(1000);
		  goto SET;
			
		}

	EXTINT=1<<1;

	VICVectAddr=0;

}

