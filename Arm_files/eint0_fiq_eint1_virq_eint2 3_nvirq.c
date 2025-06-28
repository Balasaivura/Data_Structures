#include<LPC21xx.h>
#include "types.h"
#include "pin_function_defines.h"
#include "pin_connect_block.h"
#include "delay.h"
#define EINT0_CHNO 14
#define EINT0_STATUS_PIN 10//@P0.10
#define EINT1_CHNO 15
#define EINT1_STATUS_PIN 11//@P0.11
#define EINT2_CHNO 16
#define EINT2_STATUS_PIN 12//@P0.12
#define EINT3_CHNO 17
#define EINT3_STATUS_PIN 13//@P0.13
void eint0_isr(void)__irq;
void eint1_isr(void)__irq;
void eints_nvirqs(void)__irq;
u32 count;
int main()
{
	//cfg p0.1 pin as eint0 input pin
	CfgPortFunc(0,1,EINT0_PIN);
	//cfg p0.3 pin as eint1 input pin
	CfgPortFunc(0,3,EINT1_PIN);
	//cfg p0.7 pin as eint2 input pin
	CfgPortFunc(0,7,EINT2_PIN);
	//cfg p0.9 pin as eint3 input pin
	CfgPortFunc(0,9,EINT3_PIN);
	//cfg dir of eint0,eint1 status pin
	IODIR0|=1<<EINT0_STATUS_PIN|1<<EINT1_STATUS_PIN|1<<EINT2_STATUS_PIN|1<<EINT3_STATUS_PIN;
	//cfg VIC
	//cfg eint0 as fiq rest eint1,eint2,eint3 are irq type 
	VICIntSelect|=1<<EINT0_CHNO;
	//Enable eint0,eint1,eint2,eint3 via VIC
	VICIntEnable=1<<EINT0_CHNO|1<<EINT1_CHNO|1<<EINT2_CHNO|1<<EINT3_CHNO;
	//cfg eint0 as fiq via startup code
	//CFG eint1 as v.irq with priority 0(highest)
	VICVectCntl0=(1<<5)|EINT1_CHNO;
	//LOADisr address in slot 0
	VICVectAddr0=(u32)eint1_isr;
	//cfg eint2,eint3 as nv.irq
	//load isr address in slot 1
	VICDefVectAddr=(u32)eints_nvirqs;
	//cfg ext interrupt peripheral(EIP)
	//Enable eint0,eint1,eint2,eint3 via EIP
	//default all are enable
	//EXTINT=0;
	//cfg eint0,eint1 as edge triggered
	EXTMODE=1<<3|1<<2|1<<1|1<<0;
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
	//clear status flag of eint1 in EIP
	EXTINT=1<<1;
	//clear status of eint1 int VIC
	VICVectAddr =0;
	delay_ms(100);
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
void eints_nvirqs(void)__irq
{
	if(((VICIRQStatus>>EINT2_CHNO)&1)==1)
	{
		//toggle p0.4 gpio pin as interrupt activity
		IOPIN0^=1<<EINT2_STATUS_PIN;
		//delay_s(1);
		//clear status flag of eint2 in EIP
		EXTINT=1<<2;
		//clear status of eint2 int VIC
		//VICVectAddr =0;
		delay_ms(100);
	}
	if(((VICIRQStatus>>EINT3_CHNO)&1)==1)
	{
		//toggle p0.6 gpio pin as interrupt activity
		IOPIN0^=1<<EINT3_STATUS_PIN;
		//delay_s(1);
		//clear status flag of eint3 in EIP
		EXTINT=1<<3;
		//clear status of eint2 int VIC
		//VICVectAddr =0;
		delay_ms(100);
	}
	//clear status of eints in VIC
	VICVectAddr=0;
}
