#include<LPC214x.h>
#include "types.h"
#include "delay.h"
#include "lcd_defines.h"
#include "lcd.h"
#include "kpm.h"
#include "dht11.h"
#include "i2c.h"
#include "esp01.h"
#include "uart0.h"
#include "i2c.h"
#include "i2c_eeprom.h"
#include "Edit_Fun.h"
#define I2C_EEPROM_SA1 0x50 //7Bit Slave Addr
#define I2C_EEPROM_SA2 0x60 //7Bit Slave Addr
#define I2C_SUPPLY 19
#define EINT0_CHNO 16
#define BUZZER_STATUS_PIN 5//p0.5
void rtc_init(void);
extern s8 buff[300],dummy;
extern u8 i,ch,r_flag;
u32 SPTemp=30,SPHum=50,flag=0,t;
u32 count=0,count2=0;
int main()
{			  
	
	 u8 humidity_int, humidity_decimal, temp_int, temp_decimal, checksum;
	 PINSEL0|=0x0000C005;
	 SPTemp=35;
	 SPHum=65;
	 CCR=0x11; //timer started with external clock source
	 //IODIR0|=1<<I2C_SUPPLY;
	 //IOSET0|=1<<I2C_SUPPLY;
	 //cfg dir of buzzer status pin
	 IODIR0|=1<<BUZZER_STATUS_PIN;
	 VICIntEnable=1<<EINT0_CHNO;
	 //cfg eint0 as virq with priority 0(highest)
	 VICVectCntl1 = (1<<5)|EINT0_CHNO;
	 //load isr address in slot 0
	 VICVectAddr1 = (u32)eint0_isr;
	 EXTINT=1<<2;
	 EXTMODE=1<<2;
	 initlcd();
	 InitKPM();
	 InitUART0();
	 init_i2c();
	 cmdlcd(0x80);
	 strlcd("CLOUD-CONNECTED");
	 cmdlcd(0xC0);
	 strlcd("SENSOR MONITORING");
	 cmdlcd(0x94);
	 strlcd("AND ALERT SYSTEM FOR");
	 cmdlcd(0xD4);
	 strlcd("INDUSTRIAL APPs");
	 delay_s(2);
	 cmdlcd(0x01);
	 strlcd("Connecting ESP01");
	 delay_s(2);
	 if(flag==0)
	 {
	 esp01_connectAP();
	 rtc_init();
	 flag=1;
	 }
	 delay_ms(500);
	 cmdlcd(0x01);
	 i2c_eeprom_write(I2C_EEPROM_SA1,0x0000,SPTemp);
	 t=i2c_eeprom_read(I2C_EEPROM_SA1,0x0000);
	 delay_ms(2000);
	 if(t==35)
	 {
		 strlcd("Write success");
   }		
	 else
   {
		  strlcd("Write Fail");
   }
	 i2c_eeprom_write(I2C_EEPROM_SA2,0x0000,SPHum);
	 t=i2c_eeprom_read(I2C_EEPROM_SA2,0x0000);
	 delay_ms(2000);
	 if(t==65)
	 {
		 strlcd("Write success");
   }		
	 else
   {
		  strlcd("Write Fail");
   }
	esp01_sendToThingspeak(SPTemp,3);
	esp01_sendToThingspeak(SPHum,4);
	delay_ms(500);
	cmdlcd(0x01);
	strlcd("Going to While");
	delay_ms(500);
	cmdlcd(0x01);
  while(1) //to keep alive so as to monitor the clock
  {
	/*SPTemp=esp01_RecevieFromThingspeak();
	cmdlcd(0x01);
	cmdlcd(0x80);
	strlcd("Cloud data: ");
	U32lcd(SPTemp);	*/
	count++;count2++;
	if(count==3)
	{
		dht11_request();
		dht11_response();
		humidity_int = dht11_data();
		humidity_decimal = dht11_data();
		temp_int = dht11_data();
		temp_decimal = dht11_data();
		checksum = dht11_data();
		count=0;
	}
	if(count2==120)
	{
		esp01_sendToThingspeak(temp_int,1);
		delay_ms(1000);
		esp01_sendToThingspeak(humidity_int,2);
		delay_ms(500);
		count2=0;
	}		
	charlcd(HOUR/10+'0');
    charlcd(HOUR%10+'0');
    charlcd(':');
    charlcd(MIN/10+'0');
    charlcd(MIN%10+'0');
    charlcd(':');
    charlcd(SEC/10+'0');
    charlcd(SEC%10+'0');
	strlcd("   ");
	switch(DOW)
	{
		case 0:strlcd("Sun");
				break;
		case 1:strlcd("Mon");
				break;
		case 2:strlcd("Tue");
				break;
		case 3:strlcd("Wed");
				break;
		case 4:strlcd("Thu");
				break;
		case 5:strlcd("Fri");
				break;
		case 6:strlcd("Sat");
				break;
	 }
	 strlcd("      ");
	cmdlcd(0xc0);
		
	charlcd(DOM/10+'0');
    charlcd(DOM%10+'0');
    charlcd('/');
    charlcd(MONTH/10+'0');
    charlcd(MONTH%10+'0');
    charlcd('/');
    charlcd(YEAR/10+'0');
    charlcd(YEAR%10+'0');
	cmdlcd(0x94);
	strlcd("Temp: ");
	U32lcd(temp_int);
	charlcd(223);
	charlcd('C');
	cmdlcd(0xd4);
	strlcd("Humidity: ");
	U32lcd(humidity_int);
	strlcd("% RH    ");
	cmdlcd(0x80);
	/*if(temp_int>=SPTemp)
	{
		cmdlcd(0x01);
		cmdlcd(0x80);
		strlcd("Setpoint Crossed");
		delay_ms(1000);
		//toggle p0.5 gpio pin as active
		IOPIN0^=1<<BUZZER_STATUS_PIN;
		delay_s(3);
	} */
	//}
		delay_ms(1000);
  }
}

void eint0_isr(void)__irq
{
	u8 ch;
	while(1)
	{
		cmdlcd(0x01);
		cmdlcd(0x80);
		strlcd("1.Edit_Time:");
		cmdlcd(0xc0);
		strlcd("2.Edit_SetPoint:");
		cmdlcd(0x94);
		strlcd("*.Return");
		cmdlcd(0x80);
		ch=KeyScan();
		while(ColScan()==0);
		switch(ch)
		{
			case '1':Edit_Time();
					break;
			case '2':Edit_SetPoint();
					break;
			case 'C':
					break;
		}
		cmdlcd(0x01);
		break;
	}
	//clear status flag of eint2 in EIP
	EXTINT=1<<2;
	//clear status of eint0 int VIC
	VICVectAddr =0;
	//cmdlcd(0x01);
} 
	 
