#include<LPC214x.h>
#include "types.h"
#include "delay.h"
#include "lcd_defines.h"
#include"lcd.h"
#include "kpm.h"
#include "i2c.h"
#include "i2c_eeprom.h"
#define I2C_EEPROM_SA1 0x50 //7Bit Slave Addr
#define I2C_EEPROM_SA2 0x60 //7Bit Slave Addr
void rtc_init(void);
extern u32 SPTemp,SPHum;
void Edit_Time()
{
	u32 num;
	u8 ch;
	initlcd();
	InitKPM();
	//init_i2c();
	cmdlcd(0x01);
	cmdlcd(0x80);
	strlcd("1.Hour 2.Min 3.Sec");
	cmdlcd(0xc0);
	strlcd("4.Date 5.Mon 6.Year");
	cmdlcd(0x94);
	strlcd("C.Return");
	ch=KeyScan();
	while(ColScan()==0);
	switch(ch)
	{
		case '1':cmdlcd(0x01);
				strlcd("Edit_Hour ");
				 num=ReadNum();
				 HOUR=num;
				 cmdlcd(0xc0);
				 strlcd("Hour Edited: ");
				 U32lcd(num);
				delay_s(1);
				cmdlcd(0x01);
				break;
		case '2':cmdlcd(0x01);
				strlcd("Edit_Min ");
				num=ReadNum();
				MIN=num;
				cmdlcd(0xc0);
				strlcd("Min Edited: ");
				U32lcd(num);
				delay_s(1);
				cmdlcd(0x01);
				break;
		case '3':cmdlcd(0x01);
				strlcd("Edit_Sec ");
				num=ReadNum();
				SEC=num;
				cmdlcd(0xc0);
				strlcd("Sec_Edited: ");
				U32lcd(num);
				delay_s(1);
				cmdlcd(0x01);
				break;
		case '4':cmdlcd(0x01);
				 strlcd("Edit_Date ");
				 num=ReadNum();
				 DOM=num;
				 cmdlcd(0xc0);
				 strlcd("Date Edited: ");
				 delay_s(1);
				U32lcd(num);
				cmdlcd(0x01);
				break;
		case '5':cmdlcd(0x01);
				strlcd("Edit_Month ");
				num=ReadNum();
				MONTH=num;
				cmdlcd(0xc0);
				strlcd("Month Edited: ");
				delay_s(1);
				U32lcd(num);
				cmdlcd(0x01);
				break;
		case '6':cmdlcd(0x01);
				strlcd("Edit_Year ");
				num=ReadNum();
				YEAR=num;
				cmdlcd(0xc0);
				strlcd("Year_Edited: ");
				delay_s(1);
				U32lcd(num);
				cmdlcd(0x01);
				break;
		case '7':cmdlcd(0x01);
				strlcd("Edit_Week ");
				num=ReadNum();
				DOW=num;
				cmdlcd(0xc0);
				strlcd("Week_Edited: ");
				delay_s(1);
				U32lcd(num);
				cmdlcd(0x01);
				break;
		case 'C':
					break;
	}
}
void Edit_SetPoint()
{
	u32 num=0,Eread,t;
	u8 ch;
	initlcd();
	InitKPM();
	//init_i2c();
	cmdlcd(0x01);
	cmdlcd(0x80);
	strlcd("1.Edit_Temp_Setpoint");
	cmdlcd(0xc0);
	strlcd("2.Edit_Hum_Setpoint");
	cmdlcd(0x94);
	strlcd("C.Return");
	ch=KeyScan();
	while(ColScan()==0);
	switch(ch)
	{
		case '1':cmdlcd(0x01);
				strlcd("Edit_Temp:");
				cmdlcd(0xc0);
				strlcd("Wait 2sec...");
				Eread=i2c_eeprom_read(I2C_EEPROM_SA1,0x0000);
				delay_ms(2000);
				cmdlcd(0x94);
				strlcd("Now Enter ");	
				 num=ReadNum();
				 if(num!=SPTemp && num!=Eread)
				 {
				 	SPTemp=num;
					i2c_eeprom_write(I2C_EEPROM_SA1,0x0000,num);
				 	t=i2c_eeprom_read(I2C_EEPROM_SA1,0x0000);
					if(t==num)
	 				{
		 				strlcd("Write success");
   					}		
	 				else
   					{
		  				strlcd("Write Fail");
   					}
					cmdlcd(0x94);
					strlcd("Temp Edited: ");
					U32lcd(num);
					cmdlcd(0x01);
				}
				else
				{
					cmdlcd(0xd4);
					strlcd("Entered Same");
					delay_s(1);
					cmdlcd(0x01);
				}  
				break;
		case '2':cmdlcd(0x01);
				strlcd("Edit_Hum");
				cmdlcd(0xc0);
				strlcd("Wait 2sec...");
				Eread=i2c_eeprom_read(I2C_EEPROM_SA2,0x0000);
				delay_ms(2000);
				cmdlcd(0x94);
				strlcd("Now Enter ");
				num=ReadNum();
				if(num!=SPTemp && num!=Eread)
				 {
					SPHum=num;
					i2c_eeprom_write(I2C_EEPROM_SA2,0x0000,num);
					t=i2c_eeprom_read(I2C_EEPROM_SA2,0x0000);
					if(t==num)
	 				{
		 				strlcd("Write success");
   					}		
	 				else
   					{
		  				strlcd("Write Fail");
   					}cmdlcd(0x94);
					strlcd("Hum Edited: ");
					U32lcd(num);
					cmdlcd(0x01);
				}
				else
				{
					cmdlcd(0xd4);
					strlcd("Entered Same");
					delay_s(1);
					cmdlcd(0x01);
				} 
				break;
	   case 'C':
					break;
	}
}
void rtc_init()
{
	
	SEC= 00; //Initialized seconds
  MIN=29; //Initialized minutes
  HOUR=8;//Initialized hour
  DOM=31;//Initialized Date
  MONTH=01;//Initialized Month
  YEAR=25;//Initialized Year
  DOW=5;
}
