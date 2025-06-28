#include <LPC21xx.h>
#include "types.h"
#include "pin_function_defines.h"
#include "pin_connect_block.h"
#include "delay.h"
#define EINT0_CHNO 14
#define EINT0_STATUS_PIN 0//p0.0
void eint0_isr(void)__irq;
u32 cnt;
main()
{
	IODIR0|=1<<3;
	//cfg p0.1 pin as eint0 input pin
	PINSEL0=0x000000C0;
	//CfgPortFunc(0,1,EINT0_PIN);
	//cfg dir of eint0 status pin
	IODIR0|=1<<EINT0_STATUS_PIN;
	//cfg VIC
	//default all interrupt srcs are irq type
	//VICIntSelect=0;
	//Enable eint0 via VIC
	VICIntEnable=1<<EINT0_CHNO;
	//cfg eint0 as virq with priority 0(highest)
	VICVectCntl0 = (1<<5)|EINT0_CHNO;
	//load isr address in slot 0
	VICVectAddr0 = (u32)eint0_isr;
	//cfg ext interrupt peripheral(EIP)
	//Enable eint0 via EIP
	//default all are enable
	//EXTINT=0;
	EXTMODE=1<<0;
	//cfg eint0 as edge triggered
	//EXTPOLAR = 1<<0;
	while(1)
	{
		cnt++;
		//IOPIN0=cnt<<3;
		//delay_us(100);
	}
}
void eint0_isr(void)__irq
{
	//toggle p0.0 gpio pin as interrupt activity
	IOPIN0^=1<<EINT0_STATUS_PIN;
	delay_s(1);
	//clear status flag of eint0 in EIP
	EXTINT=1<<0;
	//clear status of eint0 int VIC
	VICVectAddr =0;
}
