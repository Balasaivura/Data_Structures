#include "types.h"
#include "I2C_define.h"
#include "defines.h"
#include <LPC21xx.h>
void i2c_init(void)
{
	//scl and sda pins config
	//CFGPIN(PINSEL0,2,FUN2);
	//CFGPIN(PINSEL0,3,FUN2);
	PINSEL0|=0x00000050;
	//set the clock speed
	I2SCLL=LOADVAL;
	I2SCLH=LOADVAL;
	//enable the i2c peripheral
	I2CONSET=1<<I2CEN;
}
void i2c_start(void)
{
	//give the start event
	I2CONSET=1<<STA;
	//Read the status of si bit
	while(((I2CONSET>>SI)&1)==0);
	//clear start bit
	I2CONCLR=1<<STAC;
}
void i2c_stop(void)
{
	//give the stop event
	I2CONSET=1<<STO;
	//clear the si bit
	I2CONCLR=1<<SIC;
	while(((I2CONSET>>STO)&1));
}
void i2c_write(u8 dat)
{
	//write the data into data register
	I2DAT=dat;
	//clear the si bit
	I2CONCLR =1<<SIC;
	//read the status of si bit
	while(((I2CONSET>>SI)&1)==0);
}
u8 i2c_nack(void)
{
	//assert ack
	I2CONSET=0X00;
	//clear si bit
	I2CONCLR=1<<SIC;
	//read the status of si bit
	while(((I2CONSET>>SI)&1)==0);
	//return i2c data
	return I2DAT;
}
U8 i2c_mack(void)
{
	I2CCONSET=1<<AA;
	//clear si bit
	I2CONCLR=1<<SIC;
	//read the status ofsi bit
	while(((I2CONSET>>SI)&1)==0);
	//clear ack assert bit
	I2CONCLR=1<<AAC;
	//return i2c data
	return I2DAT;
}
void i2c_restart(void)
{
	 //give the start event
	I2CONSET=1<<STA;
	//clear si bit
	I2CONCLR=1<<SIC;
	//Read the status of si bit
	while(((I2CONSET>>SI)&1)==0);
	//clear start bit
	I2CONCLR=1<<STAC;
}
