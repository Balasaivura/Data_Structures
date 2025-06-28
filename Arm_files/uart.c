#include<LPC21xx.h>
#include "types.h"
#include"uart.h"
#include"defines.h"
#include"pin_connect_block.h"
#include"uart_defines.h"

void Init_UART0(void)
{
	//cfg p0.0 & p0.1 as TxD0,RxD0 pins
	CfgPortFunc(0,0,1);
	CfgPortFunc(0,1,1);
	//cfg UxLCR for 8N1 and DLAB enabled
	U0LCR=(1<<DLAB_BIT)|WORD_LEN_SEL_BITS;
	//set required BAUD
	U0DLL=DIVISOR;
	U0DLM=DIVISOR>>8;
	//reset/disable DLAB
	CLRBIT(U0LCR,DLAB_BIT);
	#if UART_INTS_ENABLE>0
	//cfg VIC
	//activate uart 0 interrupts as irq
	//VICIntSelect=0;
	//Enable UART0 interrupts
	VICIntEnable=1<<UART0_VIC_CHNO;
	//cfg uart0 interrupts as v.irq with priority 0
	VICVectCntl0=1<<5|UART0_VIC_CHNO;
	//Load uart0 isr address into slot0
	VICVectAddr0=(u32)uart0_isr;
	//cfg uart0 periphral to allow intterupts
	U0IER=1<<THRE_INT_EN_BIT|1<<RDA_INT_EN_BIT;
	IODIR0|=1<<U0_TX_INT_STATUS_LED|1<<U0_RX_INT_STATUS_LED;
	#endif
}
void uart0_isr(void)__irq
{
	u8 rByte;
	rByte=U0IIR;
	if(rByte==U0_THRE_INT_STATUS)
	{
		CPLBIT(IOPIN0,U0_TX_INT_STATUS_LED);
	}
	else if(rByte==U0_RDA_INT_STATUS)
	{
		CPLBIT(IOPIN0,U0_RX_INT_STATUS_LED);
	}
	//clear status  in VIC
	VICVectAddr=0;
	rByte=U0RBR;
}
void U0_TxByte(u8 sByte)
{
	//write into UxTHR any byte for seriel transmission
	U0THR=sByte;
	//wait until transmission completion status
	while(READBIT(U0LSR,TEMT_BIT)!=1);
}

u8 U0_RxByte(void)
{
	//wait for reception status
	while(READBIT(U0LSR,DR_BIT)!=1);
	//read & return receive byte
	return U0RBR;
}
