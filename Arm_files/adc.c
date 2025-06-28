#include <LPC21xx.h>
#include "types.h"
#include "delay.h"
#include "adc_defines.h"

void Init_ADC(void)
{
	//cfg p0.27,p0.28,p0.29,p0.30 pins as analog input pins
	//PINSEL1=0x15400000;
	//cfg ADCR
	ADCR=1<<PDN_BIT|(CLKDIV<<CLKDIV_BITS)|NO_CHANNEL;
}
f32 Read_ADC(u8 chNo)
{
	u32 adcVal;
	f32 eAR;
	//mask /clear previous channel selection
	ADCR&=0xFFFFFF00;
	//select new channel for sampling analog input
	//& start adc conversion
	ADCR|=(1<<START_BIT)|(1<<chNo);
	//wait for conversion time
	delay_us(3);
	//check status of conversion
	while(((ADDR>>DONE_BIT)&1)==0);
	//stop adc conversion
	ADCR&=~(1<<START_BIT);
	//read 10-bit digital data
	adcVal=((ADDR>>RESULT_BITS)&1023);
	//applying step size
	eAR=(adcVal*(3.3/2023));
	return eAR;
}
