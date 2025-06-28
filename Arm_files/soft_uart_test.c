#include<LPC21xx.h>
#include"types.h"
#include"defines.h"
#include"delay.h"
#define BAUD9600 104//us
#define TXD_PIN 0//@p0.0
#define RXD_PIN 1//@p0.1

void Init_softuart(void)
{
	//cfg TXD pin as gpio out & RXD pin is default INput
	IOSET0=1<<TXD_PIN;
	IODIR0|=1<<TXD_PIN;
}
void SoftUART_TxByte(u8 Sbyte)
{
	u8 i;
	//issue start bit 0
	IOCLR0=1<<TXD_PIN;
	delay_us(BAUD9600);
	for(i=0;i<=7;i++)
	{
		//serialize out byte 1sb to msb order @BAUDRATE
		READWRITEBIT2(IOPIN0,TXD_PIN,Sbyte,i);
		//wait for baud
		delay_us(BAUD9600);
	}
	//issue stop bit '1'
	IOSET0=1<<TXD_PIN;
	//wait for baud
	delay_us(BAUD9600);
}
u8 SoftUART_RxByte(void)
{
	u8 rByte;
	u32 i;
	//wait of start bit from transmitter
	while(READBIT(IOPIN0,RXD_PIN)==1);
	//if start bit detected wait for half of baudrate
	delay_us(BAUD9600/2);
	for(i=0;i<=7;i++)
	{
		//wait for baud
		delay_us(BAUD9600);
		//serial in lsb to  msb order & record
		READWRITEBIT2(rByte,i,IOPIN0,RXD_PIN);
	}
	//wait for baud
	delay_us(BAUD9600);
	//read stop bit
	while(READBIT(IOPIN0,RXD_PIN)!=1);
	return rByte;
}
u8 rByte[6] __attribute__((at(0x40000010)));
main()
{
	u32 i;
	Init_softuart();
	for(i=0;i<=25;i++)
	{
		SoftUART_TxByte('A'+i);
		delay_ms(100);
	}
	i=0;
	while(rByte[i]!='*')
	{
		rByte[i++]=SoftUART_RxByte();
	}
	rByte[--i]='\0';
	while(1);
}
