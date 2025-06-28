#include<LPC21xx.h>
#include "types.h"
#include "pin_function_defines.h"
#include "pin_connect_block.h"
#include "delay.h"
#define EINT0_CHNO 14
#define EINT0_STATUS_PIN 0//@P0.0
#define EINT1_CHNO 15
#define EINT1_STATUS_PIN 2//@P0.2
void eint0_isr(void)__irq;
void eint1_isr(void)__irq;
u32 count;
int main()
{
	//cfg p0.1 pin as eint0 input pin
	CfgPortFunc(0,1,EINT0_PIN);
	//cfg p0.3 pin as eint1 input pin
	CfgPortFunc(0,3,EINT1_PIN);
	//cfg dir of eint0,eint1 status pin
	IODIR0|=1<<EINT0_STATUS_PIN|1<<EINT1_STATUS_PIN;
	//cfg VIC
	//default all interuupt srcs are irq type 
	VICIntSelect|=1<<EINT0_CHNO;
	//Enable eint0,eint1 via VIC
	VICIntEnable=1<<EINT0_CHNO|1<<EINT1_CHNO;
	/*//CFG eint0 as v.irq with priority 0(highest)
	VICVectCntl0=(1<<5)|EINT0_CHNO;
	//LOADisr address in slot 0
	VICVectAddr0=(u32)eint0_isr; */
	//cfg eint1 as v.irq with priority 1(next)
	VICVectCntl1=(1<<5)|EINT1_CHNO;
	//LOAD isr address into slot 1
	VICVectAddr1=(u32)eint1_isr;
	//cfg ext interrupt peripheral(EIP)
	//Enable eint0,eint1 via EIP
	//default all are enable
	//EXTINT=0;
	//cfg eint0,eint1 as edge triggered
	EXTMODE=1<<1|1<<0;
	//cfg eint0,eint1 as falling edge triggered
	//EXTPOLAR=0;
	while(1)
	{
		count++;
	}
}
void eint1_isr(void)__irq
{
	//toggle p0.2 gpio pin as interrupt activity
	IOPIN0^=1<<EINT1_STATUS_PIN;
	//delay_s(1);
	//clear status flag of eint0 in EIP
	EXTINT=1<<1;
	//clear status of eint0 int VIC
	VICVectAddr =0;
}
void eint0_isr(void)__irq
{
	//toggle p0.0 gpio pin as interrupt activity
	IOPIN0^=1<<EINT0_STATUS_PIN;
	//delay_s(1);
	//clear status flag of eint0 in EIP
	EXTINT=1<<0;
	//clear status of eint0 int VIC
	//VICVectAddr =0;
	delay_ms(100);
}
